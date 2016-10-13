main : main.o pow.o iseven.o
	g++ -o main main.o pow.o iseven.o

main.o : main.cpp pow.h iseven.h
	g++ -c main.cpp

pow.o : pow.h pow.cpp  
	g++ -c pow.cpp 

iseven.o : iseven.h iseven.cpp 
	g++ -c iseven.cpp 

clean: 
	rm *.o main  
