main : main.o hanoi.o
	g++ -o main main.o hanoi.o

main.o : main.cpp hanoi.h
	g++ -c main.cpp 

hanoi.o : hanoi.h hanoi.cpp 
	g++ -c hanoi.cpp 

clean:
	rm *.o main  
