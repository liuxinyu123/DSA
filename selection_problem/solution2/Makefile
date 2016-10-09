main : main.o insert_array.o print_array.o bubble_sort.o
	g++ -o main main.o insert_array.o print_array.o bubble_sort.o

main.o : main.cpp insert_array.h bubble_sort.h print_array.h
	g++ -c main.cpp 

insert_array.o : insert_array.h insert_array.cpp 
	g++ -c insert_array.cpp

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp

bubble_sort.o : bubble_sort.h bubble_sort.cpp
	g++ -c bubble_sort.cpp 
	

clean:
	rm *.o main

