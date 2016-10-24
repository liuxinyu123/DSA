main : main.o balancecharacter.o
	g++ -o main main.o balancecharacter.o

main.o : main.cpp balancecharacter.h
	g++ -c main.cpp 

balancecharacter.o : balancecharacter.h balancecharacter.cpp 
	g++ -c balancecharacter.cpp

clean:
	rm *.o main 

