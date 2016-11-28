CC = g++
CXXFLAGS = -Wall

objects = main.o heapsort.o printarray.o
targets = heapsort

$(targets) : $(objects)
	$(CC) -o $(targets) $(objects)

main.o : heapsort.h printarray.h

heapsort.o : heapsort.h

printarray.o : printarray.h

.PHONY : clean

clean:
	rm $(objects) $(targets)
