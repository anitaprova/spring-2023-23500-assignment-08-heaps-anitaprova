OBJECTS = funcs.o
CXXFLAGS = -g
LDFLAGS =
CXX=g++

main: main.o $(OBJECTS)
	$(CXX) -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -g -o tests tests.o $(OBJECTS)

main.o: main.cpp 

tests.o: tests.cpp doctest.h 

funcs.o: funcs.cpp funcs.h

clean: 
	rm -f main tests main.o tests.o $(OBJECTS)