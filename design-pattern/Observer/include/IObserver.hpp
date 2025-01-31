#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

#include "MessageData.hpp"

struct IObserver
{
    virtual ~IObserver() = default;
    virtual void Update(const MessageData& message) = 0;
};


#endif // IOBSERVER_HPP