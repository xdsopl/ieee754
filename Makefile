
CFLAGS = -std=c99 -W -Wall -O3

main: main.c ieee754.h

test: main
	./main

clean:
	rm -f main

