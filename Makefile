all: main.exe

main.exe: main.o point.o carre.o rectangle.o cercle.o Forme.o
	g++ -o main.exe main.o point.o carre.o rectangle.o cercle.o Forme.o

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp

carre.o: carre.cpp
	g++ -c carre.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

cercle.o: cercle.cpp
	g++ -c cercle.cpp

Forme.o: Forme.cpp
	g++ -c Forme.cpp
