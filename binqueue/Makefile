main : main.o binqueue.o
	g++ -o main main.o binqueue.o

main.o : main.cpp binqueue.h
	g++ -c main.cpp

binqueue.o : binqueue.h binqueue.cpp 
	g++ -c binqueue.cpp

clean:
	rm *.o main 
