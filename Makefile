poker: poker.o
	gcc poker.o -o poker
poker.o: poker.c
	gcc -c poker.c -o poker.o
clean:
	rm -rf poker.o poker
