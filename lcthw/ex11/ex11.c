#include <stdio.h>

int
main(int argc, char* argv[])
{
    /*
        This is how you can initialize an array and give some of its starting
       fields starting values
    */
    int  numbers[4] = { 5 };
    char name[4] = { 'a' };
    // first, print them out raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    /*
        We need the string with \0, the "end string char", if this is not present the string will
    "continue" to print. Uncomment the line below it, to see what happens when we print `name` via
    printf as a string (%s).
    */
    name[3] = '\0';
    // name[3] = 'A';

    // then print them out initialized
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    char* another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}
