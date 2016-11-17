main : main.o skewheap.o 
	g++ -o main main.o skewheap.o 

main.o : main.cpp skewheap.h
	g++ -c main.cpp 

skewheap.o : skewheap.h skewheap.cpp 
	g++ -c skewheap.cpp 

clean:
	rm *.o main 
