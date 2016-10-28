main : main.o expressiontree.o
	g++ -o main main.o expressiontree.o

main.o : main.cpp expressiontree.h
	g++ -c main.cpp 
	
expressiontree.o : expressiontree.h expressiontree.cpp 
	g++ -c expressiontree.cpp 

clean:
	rm *.o main 
