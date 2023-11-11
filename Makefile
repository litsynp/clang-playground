CC = gcc
INCLUDES = -I ./
OBJS = main.o

all: ${OBJS}
	@echo "Building..."
	${CC} ${OPTIONS} ${INCLUDES} ${OBJS} -o Binary

$.o: $.c
	${CC} ${OPTIONS} -c $*.c ${INCLUDES}

list:
	@echo ${shell ls}

clean:
	@echo "Cleaning..."
	rm -rf *.o
	rm Binary
