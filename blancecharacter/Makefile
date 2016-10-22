main : main.o bracketchecker.o
	g++ -o main main.o bracketchecker.o

main.o : main.cpp bracketchecker.h
	g++ -c main.cpp 

bracketchecker.o : bracketchecker.h bracketchecker.cpp 
	g++ -c bracketchecker.cpp 

clean:
	rm *.o main 
