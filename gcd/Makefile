main : main.o gcd.o
	g++ -o main main.o gcd.o

main.o : main.cpp gcd.h
	g++ -c main.cpp

gcd.o : gcd.h gcd.cpp 
	g++ -c gcd.cpp 

clean:
	rm *.o main 
