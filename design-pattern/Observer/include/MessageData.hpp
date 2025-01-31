#ifndef MESSAGE_DATA_HPP
#define MESSAGE_DATA_HPP

enum class MESSAGE_TYPE {
    SCORE,
    HEALTH,
};

struct MessageData {
    MESSAGE_TYPE type;
    int value;
};

#endif // MESSAGE_DATA_HPP