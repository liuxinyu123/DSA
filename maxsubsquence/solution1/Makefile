main : main.o maxsubsquence.o print_array.o 
	g++ -o main main.o maxsubsquence.o print_array.o

main.o : main.cpp maxsubsquence.h print_array.h
	g++ -c main.cpp

maxsubsquence.o : maxsubsquence.h maxsubsquence.cpp
	g++ -c maxsubsquence.cpp

print_array.o : print_array.h print_array.cpp
	g++ -c print_array.cpp

clean:
	rm *.o main 
