#pragma once
#include "BaseCharacter.h"

class Duke : public BaseCharacter {
public:
    Duke();
    virtual ~Duke(){}
    int attack() override;
    void defend(int incomingDamage) override;
    void absorption();
    void angry();
};
