#include <stdio.h>
#include <ctype.h>

/*
    Forward declarations of functions defined later.
    If the compiler is set to C99 (or later) standard AND the functions are NOT delcared before they
are used -- the compiler will complain loudly. Older programming standards generally use "implicitly" declared functions, hoping the compiler
or linker can find them later in the code.

    Comment them out, see what happens.
*/
void print_arguments(int argc, char *argv[]);
void print_letters(char arg[]);
int can_print_it(char ch);

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++)
    {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for (i = 0; arg[i] != '\0'; i++)
    {
        char ch = arg[i];

        if (can_print_it(ch))
        {
            printf("'%c' == %d ", ch, ch);
        }
    }

    puts("\n");
}

int can_print_it(char ch)
{
    return isalpha((int)ch) || isblank((int)ch);
}
