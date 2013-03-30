#include "Subject.h"

Subject::Subject()
{
    _observers = std::list<const ObserverInterface*>();
}

void Subject::notifyObservers(const Notification& n) const
{
    for (std::list<const ObserverInterface*>::const_iterator it = _observers.begin(); it != _observers.end(); ++it) {
        (*it)->update(n);
    }
}

void Subject::registerObserver(const ObserverInterface* o)
{
    _observers.push_back(o);
}

void Subject::removeObserver(const ObserverInterface* o)
{
    _observers.remove(o);
}
