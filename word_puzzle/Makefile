main : main.o word_puzzle.o
	g++ -o main main.o word_puzzle.o

main.o : main.cpp word_puzzle.h
	g++ -c main.cpp

word_puzzle.o : word_puzzle.h word_puzzle.cpp word.h
	g++ -c word_puzzle.cpp

clean:
	rm *.o main 
