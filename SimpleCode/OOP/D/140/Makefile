main: main.o bar.o foo.o
	g++ main.o bar.o foo.o -o main

main.o: main.cpp
	g++ main.cpp -c -Wall main.cpp

bar.o: bar.cpp
	g++ bar.cpp -c -Wall bar.cpp

foo.o: foo.cpp
	g++ foo.cpp -c -Wall foo.cpp

clean:
	rm -rf *.o main
