#include <iostream>

#include "Scoreboard.hpp"
#include "GameInstance.hpp"

int main() {

    ISubject* subject = new GameInstance();

    new Scoreboard(subject);

    std::cout << "Change state at '12' :" << std::endl;
    subject->SetState(12);

    std::cout << "Change state a '15' :" << std::endl;
    subject->SetState(15);

    return 0;
}