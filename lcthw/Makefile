CFLAGS=-Wall -g

.PHONY: last
last: clean
	@echo "\033[4m\033[1m\033[93m                  "
# `ls -t1 **/*.c | head -1` list *.c files in any underlying directory, sort by last updated, take first filename
	@echo "   COMPILING LAST:\033[0m \033[93m(\033[0m`ls -t1 **/*.c | head -1`\033[93m)\033[0m"
# `ls (...) | while read file; do CMD; done` iterate over ls returned files, do CMD
	@ls -t **/*.c | head -1 | while read file; do cc $$file -o last.out; done
	@echo "\033[1m\033[92m + Compiled as\033[0m last.out"

.PHONY: clean
clean:
	@echo "\033[4m\033[1m\033[94m               "
	@echo "   CLEANING UP:\033[0m"
	@echo "\033[1m\033[91m   Removing\033[0m files with 'out' extension."
# list *.out files, if pattern yeilds no reulsts - forward errors (2>) to /dev/null, iterate otherwise
	@ls *.out 2> /dev/null | while read file; do echo "\033[1m\033[91m -\033[0m $$file"; done
	@rm -f *.out
	@echo "\033[1m\033[91m   Removing\033[0m files named with two digits."
	@ls [0-9][0-9] 2> /dev/null | while read file; do echo "\033[1m\033[91m -\033[0m $$file"; done
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
