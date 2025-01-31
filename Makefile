all: main.exe

main.exe: main.o point.o
	g++ -o main.exe main.o point.o

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp

