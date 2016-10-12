main : main.o randN.o
	g++ -o main main.o randN.o

main.o : main.cpp randN.h
	g++ -c main.cpp
	
randN.o : randN.h randN.cpp
	 g++ -c randN.cpp 

clean: 
	rm *.o main 
