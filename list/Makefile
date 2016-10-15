main : main.o list.o print_array.o 
	g++ -o main main.o list.o print_array.o

main.o : main.cpp list.h
	g++ -c main.cpp 

list.o : list.h list.cpp 
	g++ -c list.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp 

clean:
	rm *.o main 
