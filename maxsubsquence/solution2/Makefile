main : main.o max3.o maxsubsquence.o print_array.o
	g++ -o main main.o max3.o maxsubsquence.o print_array.o

main.o : main.cpp max3.h
	g++ -c main.cpp

max3.o : max3.h max3.cpp
	g++ -c max3.cpp

maxsubsquence.o : maxsubsquence.h maxsubsquence.cpp
	g++ -c maxsubsquence.cpp

print_array.o : print_array.h print_array.cpp
	g++ -c print_array.cpp 

clean:
	rm *.o main

