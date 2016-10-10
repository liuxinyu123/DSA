main : main.o print_digit.o print_out.o
	g++ -o main  main.o print_out.o print_digit.o

main.o : print_out.h print_digit.h main.cpp
	g++ -c main.cpp

print_out.o : print_out.h print_out.cpp
	g++ -c print_out.cpp

print_digit.o : print_digit.h print_digit.cpp
	g++ -c print_digit.cpp

clean:
	rm *.o main 
