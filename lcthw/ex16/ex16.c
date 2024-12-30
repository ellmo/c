#include <assert.h>
#include <stdio.h>  // `printf` lives here
#include <stdlib.h> // `malloc` and `free`
#include <string.h> // `strdup` lives here

struct Person
{
    char* name;
    int   age;
    int   height;
    int   weight;
};

// declaring a function that returns a pointer to Person struct
struct Person*
Person_create(char* name, int age, int height, int weight);
// declaring a void function that takes a pointer to a Person struct as an
// argument
void
Person_destroy(struct Person* who);
void
Person_print(struct Person* who);

struct Person*
Person_create(char* name, int age, int height, int weight)
{
    struct Person* who = malloc(sizeof(struct Person));
    assert(who != NULL);

    // `strdup` copies the string so the structure "owns" it
    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
};

void
Person_destroy(struct Person* who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

void
Person_print(struct Person* who)
{
    printf("Name: %s\n", who->name);
    printf("Age: %d\n", who->age);
    printf("Height: %d\n", who->height);
    printf("Weight: %d\n", who->weight);
}

int
main(int argc, char const* argv[])
{
    // Create two People structures...
    struct Person* joe = Person_create("Joe", 32, 64, 140);
    struct Person* mark = Person_create("Mark", 20, 72, 180);

    // ...print them...
    printf("Joe is at memory location: %p\n", joe);
    Person_print(joe);
    printf("Mark is at memory location: %p\n", mark);
    Person_print(mark);

    // ...and destroy them.
    Person_destroy(joe);
    Person_destroy(mark);

    return 0;
}
