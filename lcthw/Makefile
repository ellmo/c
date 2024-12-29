CFLAGS=-Wall -g

.PHONY: last
last: clean
	@echo "~~   COMPILING LAST:"
# list *.c files in any underlying directory, sort by last updated, take first, iterate, compile
	@ls -t **/*.c | head -1 | while read file; do cc $$file -o last.out; done
	@echo "  + Compiled last.out"

.PHONY: clean
clean:
	@echo "~~  CLEANING UP:"
	@echo "  - Removing files with 'out' extension."
	@rm -f *.out
	@echo "  - Removing files named with two digits."
	@rm -f [0-9][0-9]

01:
	cc ex01/ex01.c -o ./01

02:
	cc ex02/ex02.c -o ./02

03:
	cc ex03/ex03.c -o ./03

10:
	cc ex10/ex10.c -o ./10

11:
	cc ex11/ex11.c -o ./11

12:
	cc ex12/ex12.c -o ./12

13:
	cc ex13/ex13.c -o ./13

14:
	cc ex14/ex14.c -o ./14
