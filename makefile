numbers: numbers.exe

numbers.exe: numbers/numbers.o numbers/conversion_utils.o numbers/io_utils.o
	gcc -ansi -Wall -pedantic -o numbers.exe numbers/numbers.o numbers/conversion_utils.o numbers/io_utils.o

numbers/numbers.o: numbers/numbers.c numbers/numbers.h numbers/io_utils.h
	gcc -ansi -Wall -pedantic -c numbers/numbers.c -o numbers/numbers.o

numbers/conversion_utils.o: numbers/conversion_utils.c numbers/conversion_utils.h
	gcc -ansi -Wall -pedantic -c numbers/conversion_utils.c -o numbers/conversion_utils.o

numbers/io_utils.o: numbers/io_utils.c numbers/io_utils.h numbers/conversion_utils.h
	gcc -ansi -Wall -pedantic -c numbers/io_utils.c -o numbers/io_utils.o

cleanup:
	rm numbers/*.o
