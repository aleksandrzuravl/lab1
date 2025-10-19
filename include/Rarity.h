#pragma once

enum class Rarity { U, R, SR };

Rarity upgradeRarity(Rarity r);
Rarity downgradeRarity(Rarity r);
