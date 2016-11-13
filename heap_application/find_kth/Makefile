main : main.o heapsort.o print_array.o
	g++ -o main main.o heapsort.o print_array.o

main.o : main.cpp heapsort.h
	g++ -c main.cpp

heapsort.o : heapsort.h heapsort.cpp
	g++ -c heapsort.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp 

clean:
	rm *.o main 
