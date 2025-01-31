#ifndef GAMEINSTANCE_HPP
#define GAMEINSTANCE_HPP

#include <vector>
#include <algorithm>
#include "IObserver.hpp"
#include "ISubject.hpp"
 
class GameInstance : public ISubject {
public:
    GameInstance() {
        m_score = 0;
        m_health = 100;
    }

    ~GameInstance() {
        for (auto* observer : this->m_observerVector) {
            observer = nullptr;
            delete observer;
        }
    }

    void Attach(IObserver* observer) override {
        this->m_observerVector.push_back(observer);
    }

    void Dettach(IObserver* observer) override {
        auto it = std::remove(this->m_observerVector.begin(), this->m_observerVector.end(), observer);
        this->m_observerVector.erase(it, this->m_observerVector.end());
    }

    void NotifyAllObserver(const MessageData& message) override {
        for (auto* observer : this->m_observerVector) {
            observer->Update(message);
        }
    }

    void ScorePoint(const int point) {
        m_score += std::max(0, point);
        NotifyAllObserver({MESSAGE_TYPE::SCORE, m_score});
    }

    void TakeDamage(int damage) {
        m_health += std::max(0, m_health - damage);
        NotifyAllObserver({MESSAGE_TYPE::HEALTH, m_health});
    }

    int GetScore() const {
        return m_score;
    }

    int GetHealth() const {
        return m_health;
    }

private :
    std::vector<IObserver*> m_observerVector;
    int m_score;
    int m_health;
};

#endif // GAMEINSTANCE_HPP