SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:%.c=%.o)
CCFLAGS  := -Wall -O3

all: $(OBJECTS)
	gcc $(CCFLAGS) main.c -o main

main.c:
	touch $@

%.o: %.c
	gcc $(CCFLAGS) -c $<

%.c:
	touch $@
