#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

#include "IObserver.hpp"

struct ISubject
{
    virtual ~ISubject() = default;

    virtual void Attach(IObserver* observer) = 0;
    virtual void Dettach(IObserver* observer) = 0;
    virtual void NotifyAllObserver(const MessageData& message) = 0;
};


#endif // ISUBJECT_HPP