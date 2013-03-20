#include <iostream>
#include "ObserverConcreate.h"

ObserverConcreate::ObserverConcreate(const std::string &name)
    : _name(name)
{
}

void ObserverConcreate::update(const Notification& n) const
{
    std::cout << _name << ": " << "Received: " << n.getEvent() << std::endl;
}
