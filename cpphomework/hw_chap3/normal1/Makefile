CC = g++
FLAG := -g -Wall

target = app
source := main.o date.o

$(target):$(source)
	$(CC) $^ -o $@ $(FLAG)

main.o:main.cpp
	$(CC) -c $< -o $@ $(FLAG)
date.o:date.cpp
	$(CC) -c $< -o $@ $(FLAG)

.PHONY:clean

clean:
	$(RM) $(target) *.o
