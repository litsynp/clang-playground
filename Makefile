CC = gcc
INCLUDES = -I ./
OBJS = main.o

build: ${OBJS}
	@echo "Building..."
	${CC} ${OPTIONS} ${INCLUDES} ${OBJS} -o Binary

$.o: $.c
	${CC} ${OPTIONS} -c $*.c ${INCLUDES}

debug-build: ${OBJS}
	@echo "Building..."
	${CC} -Wall -pedantic -ansi -std=c99 ${OPTIONS} ${INCLUDES} ${OBJS} -o Binary

run:
	make debug-build
	./Binary
	make clean

list:
	@echo ${shell ls}

clean:
	@echo "Cleaning..."
	@rm -rf *.o
	@rm Binary
