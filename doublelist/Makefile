main : main.o doublelist.o
	g++ -o main main.o doublelist.o

main.o : main.cpp doublelist.h 
	g++ -c main.cpp 

doublelist.o : doublelist.h doublelist.cpp 
	g++ -c doublelist.cpp 

clean:
	rm *.o main 
