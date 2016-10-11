main : main.o print_array.o maxsubsquence.o
	g++ -o main main.o print_array.o maxsubsquence.o

print_array.o : print_array.h print_array.cpp
	g++ -c print_array.cpp

maxsubsquence.o : maxsubsquence.h maxsubsquence.cpp
	g++ -c maxsubsquence.cpp

clean: 
	rm *.o main 
