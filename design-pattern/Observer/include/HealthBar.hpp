#ifndef HEALTH_BAR_HPP
#define HEALTH_BAR_HPP

#include "IObserver.hpp"

class HealthBar final : public IObserver {
    public:
        HealthBar() {
            m_health = 100;
        }

        void Update(const MessageData& message) override {
            if (message.type == MESSAGE_TYPE::HEALTH) {
                m_health = std::max(0, m_health + message.value);
            }
        }

        void Render() const {
            std::cout << "Health: " << m_health << std::endl;
        }

    private:
        int m_health;
};

#endif // HEALTH_BAR_HPP