main : main.o print_array.o bucketsort.o
	g++ -o main main.o print_array.o bucketsort.o

main.o : main.cpp print_array.h bucketsort.h
	g++ -c main.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp 

bucketsort.o : bucketsort.h bucketsort.cpp 
	g++ -c bucketsort.cpp 

clean: 
	rm *.o main  
