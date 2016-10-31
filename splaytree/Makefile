main : main.o splaytree.o
	g++ -o main main.o splaytree.o

main.o : main.cpp splaytree.h
	g++ -c main.cpp 

splaytree.o : splaytree.h splaytree.cpp 
	g++ -c splaytree.cpp 

clean:
	rm *.o main 
