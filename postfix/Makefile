main : main.o postfix.o  print_array.o
	g++ -o main main.o postfix.o  print_array.o

main.o : main.cpp postfix.h
	g++ -c main.cpp 

postfix.o : postfix.h postfix.cpp
	g++ -c postfix.cpp 

print_array.o : print_array.h print_array.cpp 
	g++ -c print_array.cpp 

clean:
	rm *.o main  
