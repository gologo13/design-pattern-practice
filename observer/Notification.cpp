#include "Notification.h"

Notification::Notification(const std::string& n)
    : _event(n)
{
}

const std::string Notification::getEvent() const
{
    return _event;
}
