#include <ctype.h>
#include <stdio.h>

/*
    Forward declarations of functions defined later.
    If the compiler is set to C99 (or later) standard AND the functions are NOT
delcared before they are used -- the compiler will complain loudly. Older
programming standards generally use "implicitly" declared functions, hoping the
compiler or linker can find them later in the code.

    Comment them out, see what happens.
*/

// clang-format off
void print_arguments(int argc, char* argv[]);
void print_letters(char arg[]);
int  can_print_it(char ch);
// clang-format on

int
main(int argc, char* argv[])
{
    print_arguments(argc, argv);
    return 0;
}

void
print_arguments(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void
print_letters(char arg[])
{
    for (int i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    puts("\n");
}

int
can_print_it(char ch)
{
    // (int)ch is typecasting the value of `ch` var to int
    return isalpha((int)ch) || isblank((int)ch);
}
