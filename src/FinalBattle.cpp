#include "FinalBattle.h"
#include <iostream>

void FinalBattle::startFinal(MainHero &hero) {
    Duke duke;
    bool result = BattleMechanics::battle(hero, duke);
    if (result) {
        int path = hero.getChosenPath();
        if (path == 1) {
            BadEnding::playEnding();
        } else if (path == 2) {
            GoodEnding::playEnding();
        } else {
            NeutralEnding::playEnding();
        }
    } else {
        std::cout << "The hero was slain in the final battle...\n";
    }
}
