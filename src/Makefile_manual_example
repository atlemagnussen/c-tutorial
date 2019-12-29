exe : main.o functions.o
	cc -o exe test.o functions.o

main.o : main.c
	cc -c main.c

functions : functions.h functions.c
	cc -c functions.c

clean : 
	rm exe *.o

