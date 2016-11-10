main : main.o binheap.o
	g++ -o main main.o binheap.o

main.o : main.cpp binheap.h
	g++ -c main.cpp 

binheap.o : binheap.h  binheap.cpp 
	g++ -c binheap.cpp 

clean:
	rm *.o main

