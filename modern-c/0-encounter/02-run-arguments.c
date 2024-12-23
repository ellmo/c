/* This may look like nonsense, but really is -*- mode: C -*- */
#include <stdlib.h>
#include <stdio.h>
/*
    stdbool.h defines `true` and `false` for UP TO C17 standard.

    When using C23 you can specifically see (if you look up the definition), that `true` and `false`
are not defined:

#if defined(__STDC_VERSION__) && __STDC_VERSION__ > 201710L
#elif
  (... this is where `define` goes ...)
#endif

    If VSC (or the compiler) starts complaining about undefined `true` and `false`, either use a
different standard, or define your own, knowing they're simply 1 and 0:

#define true 1
#define false 0
*/
#include <stdbool.h>

/* The main thing that this program does. */
int main(int argc, char* argv[argc+1]) {
    // fucking C has a `puts` function, what
    puts("Hello world!");
    if (argc > 1) {
        while (true) {
            puts("some programs never stop");
        }
    } else {
        // the reclusive `do` keyword in C:
        do {
            puts("but this one does");
        } while (false);
    }

    return EXIT_SUCCESS;
}
