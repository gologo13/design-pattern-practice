CC=clang++
PROGRAM=PlayGame
OBJS=Game.o Chess.o Monopoly.o

all: $(PROGRAM)

PlayGame: $(OBJS)
	$(CC) -o $(PROGRAM) *.o main.cpp

.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o $(PROGRAM)
