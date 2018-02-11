all: caesar_tests

caesar_tests: caesar_tests.c caesar.c
	gcc -o caesar_tests caesar_tests.c caesar.c

clean:
	rm caesar_tests

run:
	./caesar_tests