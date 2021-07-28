CCFLAGS := -Wall -Wextra -Wpedantic -Wshadow -O3 # -Werror
SOURCES := $(wildcard src/*.c)
OBJECTS := $(SOURCES:src/%.c=obj/%.o)

.PHONY: all clean

all: $(OBJECTS)
	gcc obj/*.o -o bin/main

clean:
	rm obj/*.o

obj/%.o: src/%.c
	gcc $(CCFLAGS) -c $< -o $@

%.c:
	touch $@
