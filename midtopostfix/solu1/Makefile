main : main.o midtopostfix.o printstring.o 
	g++ -o main main.o midtopostfix.o printstring.o

main.o : main.cpp midtopostfix.h printstring.h
	g++ -c main.cpp 

midtopostfix.o : midtopostfix.h midtopostfix.cpp stack.h
	g++ -c midtopostfix.cpp 

printstring.o : printstring.h printstring.cpp 
	g++ -c printstring.cpp 

clean:
	rm *.o main

