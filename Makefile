CCFLAGS := -Wall -Wextra -O3
SOURCES := $(wildcard src/*.c)
OBJECTS := $(SOURCES:src/%.c=obj/%.o)

.PHONY: all clean

all: $(OBJECTS)
	gcc obj/*.o -o bin/main

clean:
	rm *.o

%.o: %.c
	gcc $(CCFLAGS) -c $<

%.c:
	touch $@
