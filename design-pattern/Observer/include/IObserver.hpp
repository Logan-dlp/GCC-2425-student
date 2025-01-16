#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

struct IObserver
{
    virtual ~IObserver() = default;
    virtual void Update() = 0;
};


#endif // IOBSERVER_HPP