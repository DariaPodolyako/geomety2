all: bin/geomety2
.PHONY: all clean

bin/geomety2: main.o square.o per.o peres.o
	gcc build/main.o build/square.o build/per.o build/peres.o -Wall -Werror -lm  -o bin/geomety2
main.o: src/main.c
	gcc src/main.c -o build/main.o -c -Wall -Werror

square.o: src/square.c
	gcc  src/square.c -o build/square.o -c -Wall -Werror -lm
per.o: src/per.c
	gcc src/per.c -o build/per.o -c -Wall -Werror -lm
peres.o: src/peres.c
	gcc src/peres.c -o build/peres.o -c -Wall -Werror -lm

test: build/test bin/geomety2_test

build/test: 
	mkdir build/test -p

bin/geomety2_test: build/test/maintest.o build/test/square.o build/test/per.o build/test/peres.o
	gcc build/test/maintest.o build/test/square.o build/test/per.o build/test/peres.o -Wall -Werror -lm  -o bin/geomety2_test -lm

build/test/maintest.o: test/maintest.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src test/maintest.c -o build/test/maintest.o

build/test/square.o: src/square.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/square.c -o build/test/square.o
	
build/test/per.o: src/per.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/per.c -o build/test/per.o
	
build/test/peres.o: src/peres.c src/foo.h 
	gcc -Wall -Werror -c -I thirdparty -I src src/peres.c -o build/test/peres.o

clean:
	rm -rf build/*.o bin/geomety2 bin/geomety2_test
