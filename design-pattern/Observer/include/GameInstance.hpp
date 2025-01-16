#ifndef GAMEINSTANCE_HPP
#define GAMEINSTANCE_HPP

#include <vector>
#include "ISubject.hpp"
 
class GameInstance : public ISubject {
public:
    int GetState() override {
        return this->m_state;
    }

    void SetState(int state) override {
        this->m_state = state;
        NotifyAllObserver();
    }

    void Attach(IObserver* observer) override {
        this->m_observerVector.push_back(observer);
    }

    void NotifyAllObserver() override {
        for (auto* observer : this->m_observerVector) {
            observer->Update();
        }
    }

private :
    std::vector<IObserver*> m_observerVector;
    int m_state;
};

#endif // GAMEINSTANCE_HPP