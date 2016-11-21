CC = g++ 
CXXFLAGS = -Wall 

objects = main.o shellsort.o
targets = shellsort

$(targets) : $(objects)
	$(CC) -o $(targets) $(objects)

main.o : shellsort.h

shellsort.o : shellsort.h

.PHONY : clean

clean:
	rm $(objects) $(targets)
