#include <stdio.h>

/*
    Excellent demonstration of how pointers work and how they can be handled.
    They're basically arrays which allow an additional (*) "de-reference" operator to grab the value
under the pointer.
*/
int
main(int argc, char const* argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    // `names` is an array of char-pointers (strings)
    char* names[] = {
        "alan", "frank", "mary", "john", "lisa",
    };

    // safely get the size of `ages`
    int count = sizeof(ages) / sizeof(int);

    // first way using indexing; no pointers used (excplicitly) here
    for (size_t i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    puts("---");

    // setup pointers to the start of the arrays
    int* cur_age = ages; // don't care what's IN `ages`, I care WHERE it is, point me to its address
    char** cur_name = names; // point me to the address of an array of pointers - pointing at chars

    // another way of using pointers
    for (size_t i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    puts("---");

    // third way, treat pointers as arrays
    for (size_t i = 0; i < count; i++) {
        printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
    }

    puts("---");

    // fourth way, stupidly complex
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    return 0;
}
