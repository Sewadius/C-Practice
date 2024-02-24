all: main

main: main.o sum.o MyClass.o
	g++ main.o sum.o MyClass.o -o main

main.o: main.cpp
	g++ -c -Wall main.cpp

sum.o: sum.cpp
	g++ -c -Wall sum.cpp

MyClass.o: MyClass.cpp
	g++ -c -Wall MyClass.cpp

clean:
	rm -rf *.o main

