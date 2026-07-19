CC = gcc
OBJECTS = BUILD\PawnSim.o BUILD\Game.o BUILD\Screen.o
LIBS = -lgrx20

clean:
	del BUILD\*.o 
	del BUILD\PAWNSIM.EXE

clean-obj:
	del BUILD\*.o

release: clean build clean-obj

build: BUILD\PAWNSIM.EXE

BUILD\PAWNSIM.EXE: $(OBJECTS)
	$(CC) -o BUILD\PAWNSIM.EXE $(OBJECTS) $(LIBS)

BUILD\PawnSim.o: SRC\PawnSim.c
	$(CC) -c SRC\PawnSim.c -o BUILD\PawnSim.o

BUILD\Game.o: SRC\Game.c
	$(CC) -c SRC\Game.c -o BUILD\Game.o

BUILD\Screen.o: SRC\Screen.c
	$(CC) -c SRC\Screen.c -o BUILD\Screen.o
