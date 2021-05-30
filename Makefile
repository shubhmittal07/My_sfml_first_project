output: main.o spriteLoad.o
	g++ main.o spriteLoad.o -o sfmlProject
main.o: main.cpp
	g++ -I src/include -c main.cpp
spriteLoad: spriteLoad.cpp spriteLoad.h
	g++ -I src/include -c spriteLoad.cpp
link:
	g++ main.o -o main -L src/lib -l sfml-graphics -l sfml-window -l sfml-system
	g++ spriteLoad.o -o spriteLoad -L src/lib -l sfml-graphics -l sfml-window -l sfml-system

