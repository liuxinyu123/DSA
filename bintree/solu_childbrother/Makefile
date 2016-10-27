main : main.o tree.o
	g++ -o main main.o tree.o

main.o : main.cpp tree.h
	g++ -c main.cpp 
	
tree.o : tree.h tree.cpp 
	g++ -c tree.cpp  

clean:
	rm *.o main 
