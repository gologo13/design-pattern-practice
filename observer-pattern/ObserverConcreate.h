#pragma once
#include "ObserverInterface.h"

class ObserverConcreate : public ObserverInterface
{
    std::string _name;
public:
    ObserverConcreate(const std::string&);
    void update(const Notification&) const;
};
