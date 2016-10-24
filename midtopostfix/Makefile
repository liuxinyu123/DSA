main : main.o midtopost.o print_array.o
	g++ -o main main.o midtopost.o print_array.o

main.o : main.cpp midtopost.h print_array.h
	g++ -c main.cpp 

midtopost.o : midtopost.h midtopost.cpp 
	g++ -c midtopost.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp

clean:
	rm *.o main 
