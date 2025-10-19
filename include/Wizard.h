#pragma once
#include "BaseCharacter.h"

class Wizard : public BaseCharacter {
public:
    Wizard();
    virtual ~Wizard(){}
    int attack() override;
    void defend(int incomingDamage) override;
    void start_game();
    int roll_dice();
};
