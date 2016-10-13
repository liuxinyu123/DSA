main : main.o diffprime.o gcd.o
	g++ -o main main.o diffprime.o gcd.o

diffprime.o: diffprime.cpp diffprime.h
	g++ -c diffprime.cpp

gcd.o: gcd.h gcd.cpp 
	g++ -c gcd.cpp 

clean:
	rm *.o main 
