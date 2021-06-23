CCFLAGS := -Wall -Wextra -O3
SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:.c=.o)

.PHONY: all clean

all: $(OBJECTS)
	gcc *.o -o main

clean:
	rm *.o

%.o: %.c
	gcc $(CCFLAGS) -c $<

%.c:
	touch $@
