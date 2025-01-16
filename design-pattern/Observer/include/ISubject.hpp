#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

#include "IObserver.hpp"

struct ISubject
{
    virtual ~ISubject() = default;
    
    virtual int GetState() = 0;
    virtual void SetState(int state) = 0;
    virtual void Attach(IObserver* observer) = 0;
    virtual void NotifyAllObserver() = 0;
};


#endif // ISUBJECT_HPP