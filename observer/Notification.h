#pragma once
#include <string>

class Notification
{
    std::string _event;
public:
    /**
     * constructor
     */
    Notification(const std::string&);

    /**
     */
    const std::string getEvent() const;
};
