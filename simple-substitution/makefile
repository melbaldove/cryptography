all: simple_tests

simple_tests: simple.c simple_tests.c ../util/util.c simple.c
	gcc -o simple_tests simple_tests.c simple.c ../util/util.c -lsodium

clean:
	rm simple_tests

run:
	./simple_tests