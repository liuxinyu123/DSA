main : main.o bubble_sort.o print_array.o
	g++ -o main main.o bubble_sort.o print_array.o

bubble_sort.o : bubble_sort.h bubble_sort.cpp
	g++ -c bubble_sort.cpp

print_array.o : print_array.h print_array.cpp
	g++ -c print_array.cpp

clean:
	rm *.o main 
