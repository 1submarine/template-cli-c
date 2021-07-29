CC      := gcc-11
CCFLAGS := -Werror -Wall -Wextra -Wpedantic -Wshadow \
	   -fstack-protector-strong -fsanitize=address \
	   -O3 -g
LD      := $(CC)
LDFLAGS := $(CCFLAGS)
SOURCES := $(wildcard src/*.c)
OBJECTS := $(SOURCES:src/%.c=obj/%.o)

.PHONY: all clean man

all: $(OBJECTS)
	$(LD) $(LDFLAGS) obj/*.o -o bin/main

clean:
	rm obj/*.o

obj/%.o: src/%.c
	$(CC) $(CCFLAGS) -c $< -o $@

%.c:
	touch $@

man:
	cd man && $(MAKE)
