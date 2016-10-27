main : main.o queue.o
	g++ -o main main.o queue.o

main.o : main.cpp queue.h
	g++ -c main.cpp 

queue.o : queue.h queue.cpp 
	g++ -c queue.cpp 

clean:
	rm *.o main 

