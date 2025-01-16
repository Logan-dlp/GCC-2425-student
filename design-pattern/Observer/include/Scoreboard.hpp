#ifndef SCOREBOARD_HPP
#define SCOREBOARD_HPP

#include <iostream>

#include "ISubject.hpp"
#include "IObserver.hpp"

class Scoreboard : public IObserver {
public :
    Scoreboard(ISubject* subject) {
        this->subject = subject;
        this->subject->Attach(this);
    }

    ~Scoreboard() {
        this->subject = nullptr;
        delete this->subject;
    }

    void Update() override {
        std::cout << "Scoreboard Updated {" << this->subject->GetState() << "} !" << std::endl;
    }

private :
    ISubject* subject;
};

#endif // SCOREBOARD_HPP