/**
 * Observe Pattern
 */

#include <iostream>
#include "Subject.h"
#include "ObserverConcreate.h"

using namespace std;

int main()
{
    ObserverConcreate *o1 = new ObserverConcreate("observer1");
    ObserverConcreate *o2 = new ObserverConcreate("observer2");

    Subject *subject = new Subject();
    subject->registerObserver(o1);
    subject->registerObserver(o2);

    const Notification n1(std::string("Event1"));
    subject->notifyObservers(n1); // notify to observer1 and observer2

    subject->removeObserver(o1);
    const Notification n2(std::string("Event2"));
    subject->notifyObservers(n2); // notify only to observer2

    delete o1;
    delete o2;
    delete subject;

    return 0;
}
