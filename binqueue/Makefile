CC = g++
CXXFLAGS = -Wall -g
objects = main.o binqueue.o

target = binqueue

$(target) : $(objects)
	$(CC) -o $(target) $(objects)

main.o : binqueue.h
binqueue.o : binqueue.h

.PHONY : clean
clean :
	rm binqueue $(objects)

