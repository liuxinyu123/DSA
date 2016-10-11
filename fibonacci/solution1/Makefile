main : main.o fibonacci.o
	g++ -o main  main.o fibonacci.o

main.o : main.cpp fibonacci.h
	g++ -c main.cpp

fibonacci.o : fibonacci.h fibonacci.cpp
	g++ -c fibonacci.cpp

clean:
	rm *.o main 
