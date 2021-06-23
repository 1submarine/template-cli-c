CCFLAGS := -Wall -Wextra -O3

.PHONY: all clean

all: $($(wildcard *.c):.c=.o)
	gcc *.o -o main

clean:
	rm *.o

%.o: %.c
	gcc $(CCFLAGS) -c $<

%.c:
	touch $@
