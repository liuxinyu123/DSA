main : main.o leftheap.o
	g++ -o main main.o leftheap.o

main.o : main.cpp leftheap.h
	g++ -c main.cpp 

leftheap.o : leftheap.h leftheap.cpp 
	g++ -c leftheap.cpp 

clean:
	rm *.o main 
