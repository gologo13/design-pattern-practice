CC=clang++
PROGRAM=ObserverPattern

all: $(PROGRAM)

ObserverPattern: Notification.o ObserverConcreate.o Subject.o
	$(CC) -o $(PROGRAM) *.o main.cpp

.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o ObserverPattern
