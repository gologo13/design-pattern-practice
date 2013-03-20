#pragma once
#include <list>
#include "ObserverInterface.h"
#include "Notification.h"

class Subject
{
    std::list<const ObserverInterface*> _observers;
public:
    /**
     * constructor
     */
    Subject();

    /**
     * notify events to the registered observers
     */
    void notifyObservers(const Notification&) const;

    /**
     * register an observer
     */
    void registerObserver(const ObserverInterface*);

    /**
     * remove an observer
     */
    void removeObserver(const ObserverInterface*);
};
