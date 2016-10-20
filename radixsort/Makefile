main : main.o radixsort.o print_array.o
	g++ -o main main.o radixsort.o print_array.o

main.o : main.cpp radixsort.h print_array.h
	g++ -c main.cpp 

radixsort.o : radixsort.h radixsort.cpp 
	g++ -c radixsort.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp 

clean:
	rm *.o main 
