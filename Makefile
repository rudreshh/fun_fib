#################################################
# Description: The Makefile of fibonacci serias # 
#                                               #
# Author: Matthew mei                           #
# Date: July. 29th 2015                         #
#################################################

OBJECTS = main.o fib00.o fib01.o fib02.o fib03.o fib04.o help.o algorithm.o T.o V.o

CC := gcc
CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wno-format-zero-length

fib:$(OBJECTS) 
	$(CC) $(CFLAGS) -o $@ $^ 

$^:fib.h

.PHONY:clean
clean:
	-rm fib $(OBJECTS)
