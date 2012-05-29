CC=g++

all: obj
	$(CC) --link *.o -o dmvis
	@echo success

obj:
	$(CC) -c *.cpp    

clean:
	rm -f *.o
	rm -f dmvis
