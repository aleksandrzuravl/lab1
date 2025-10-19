#include <gtest/gtest.h>
#include "Rarity.h"
#include "MainHero.h"  
#include "Inventory.h"  


TEST(RarityTest, Upgrade) {
    EXPECT_EQ(upgradeRarity(Rarity::U), Rarity::R);
    EXPECT_EQ(upgradeRarity(Rarity::R), Rarity::SR);
    EXPECT_EQ(upgradeRarity(Rarity::SR), Rarity::SR);
}

TEST(RarityTest, Downgrade) {
    EXPECT_EQ(downgradeRarity(Rarity::SR), Rarity::R);
    EXPECT_EQ(downgradeRarity(Rarity::R), Rarity::U);
    EXPECT_EQ(downgradeRarity(Rarity::U), Rarity::U);
}

TEST(MainHeroTest, DefendMechanic) {
    MainHero hero; // default: health=100, strength=10, defense=5
    hero.defend(105); 
    EXPECT_LE(hero.getHealth(), 0) << "Expected hero to drop to 0 or below with incoming damage=105.";
}

TEST(InventoryTest, AddItems) {
    MainHero hero;
    auto w = std::make_shared<Weapon>("TestSword", Rarity::U, 5);
    hero.addToInventory(w);
    
    testing::internal::CaptureStdout();
    hero.showInventory();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("TestSword") != std::string::npos);
}
