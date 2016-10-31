main : main.o avltree.o
	g++ -o main main.o avltree.o

main.o : main.cpp avltree.h
	g++ -c main.cpp 

avltree.o : avltree.h avltree.cpp 
	g++ -c avltree.cpp 

clean:
	rm *.o main 
