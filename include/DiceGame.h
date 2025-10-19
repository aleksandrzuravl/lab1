#pragma once
#include "Wizard.h"
#include "MainHero.h"

class DiceGame {
private:
    Wizard &wizard;
    MainHero &hero;
    bool isActive;
    int heroWins;
    int wizardWins;
    int rounds;

public:
    DiceGame(Wizard &w, MainHero &h);
    void start();
    void processRound();
    void end();
    int heroRollDice();
};
