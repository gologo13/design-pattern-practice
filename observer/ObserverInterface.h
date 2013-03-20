#pragma once
#include "Notification.h"

class ObserverInterface
{
public:
    virtual void update(const Notification&) const = 0;
    virtual ~ObserverInterface() {}
};
