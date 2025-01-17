#ifndef SCOREBOARD_HPP
#define SCOREBOARD_HPP

#include <iostream>

#include "ISubject.hpp"
#include "IObserver.hpp"

class Scoreboard : public IObserver {
    public:
        Scoreboard() {
            m_score = 100;
        }

        void Update(const MessageData& message) override {
            if (message.type == MESSAGE_TYPE::SCORE) {
                m_score = std::max(0, m_score + message.value);
            }
        }

        void Render() const {
            std::cout << "SCORE: " << m_score << std::endl;
        }

    private:
        int m_score;
};

#endif // SCOREBOARD_HPP