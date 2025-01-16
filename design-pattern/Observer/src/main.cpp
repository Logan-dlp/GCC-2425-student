#include <iostream>

#include "Scoreboard.hpp"
#include "GameInstance.hpp"

int main() {

    ISubject* subject = new GameInstance();

    IObserver* observer = new Scoreboard(subject);

    std::cout << "Change state at '12' :" << std::endl;
    subject->SetState(12);

    std::cout << "Change state at '15' :" << std::endl;
    subject->SetState(15);

    std::cout << "Dettach observer & change state at '3' :" << std::endl;
    subject->Dettach(observer);
    subject->SetState(3);

    return 0;
}