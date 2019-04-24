all: geometry
.PHONY: clean

geometry: main.o square.o per.o
	gcc build/main.o build/square.o build/per.o -Wall -Werror -lm  -o bin/geomety2
main.o: src/main.c
	gcc src/main.c -o build/main.o -c -Wall -Werror

square.o: src/square.c
	gcc  src/square.c -o build/square.o -c -Wall -Werror -lm
per.o: src/per.c
	gcc src/per.c -o build/per.o -c -Wall -Werror -lm

clean:
	rm -rf build/*.o bin/geomety2

