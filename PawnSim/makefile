CC = gxx
OBJECTS = BUILD\PawnSim.o
LIBS = LIB\PDCURSES.A

clean:
	del BUILD\*.o 
	del BUILD\PAWNSIM.EXE

clean-obj:
	del BUILD\*.o

release: clean build clean-obj

build: BUILD\PAWNSIM.EXE

BUILD\PAWNSIM.EXE: $(OBJECTS)
	$(CC) -o BUILD\PAWNSIM.EXE $(OBJECTS) $(LIBS)

BUILD\PawnSim.o: SRC\PawnSim.cpp
	$(CC) -c SRC\PawnSim.cpp -o BUILD\PawnSim.o