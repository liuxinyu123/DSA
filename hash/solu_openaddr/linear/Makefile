main : main.o hash.o
	g++ -o main main.o hash.o

main.o : main.cpp hash.h
	g++ -c main.cpp 

hash.o : hash.h hash.cpp 
	g++ -c hash.cpp 

clean:
	rm *.o main 

