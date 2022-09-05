all: main
	make clean

main: main.o vehicle.o motorcycle.o
	g++ -o main -std=c++17 main.o vehicle.o motorcycle.o

main.o: main.cpp
	g++ -c -std=c++17 main.cpp

vehicle.o: vehicle.cpp vehicle.h
	g++ -c -std=c++17 vehicle.cpp

motorcycle.o: motorcycle.cpp motorcycle.h
	g++ -c -std=c++17 motorcycle.cpp

clean:
	rm *.o