main : main.o searchtree.o
	g++ -o main main.o searchtree.o

main.o : main.cpp searchtree.h
	g++ -c main.cpp 

searchtree.o : searchtree.h searchtree.cpp 
	g++ -c searchtree.cpp 

clean:
	rm *.o main 
