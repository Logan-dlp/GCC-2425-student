#include <iostream>

#include "GameInstance.hpp"
#include "HealthBar.hpp"
#include "Scoreboard.hpp"

int main() {
    GameInstance* gameInstance = new GameInstance();
    Scoreboard* scoreboard = new Scoreboard();
    HealthBar* healthBar = new HealthBar();

    gameInstance->Attach(scoreboard);
    gameInstance->Attach(healthBar);

    gameInstance->TakeDamage(10);
    gameInstance->ScorePoint(10);

    scoreboard->Render();
    healthBar->Render();

    gameInstance->Dettach(healthBar);

    gameInstance->ScorePoint(10);


    delete gameInstance;

    return 0;
}