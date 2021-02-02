// Exercise 11, Extra Credit 4:
// If an array of characters is 4 bytes long, and an integer is 4 bytes long,
// then can you treat the whole name array like it's just an integer?
// How might you accomplish this crazy hack?
//
// Answer:
// Since it's an array, you need to dereference it. Then you just do whatever
// integer operation you want on it. Like printing it with %d or using it in
// arithmetic.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[4] = { 'a' };

    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

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
    name[3] = '\0';

    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1], another[2], another[3]);

    // This is the addition:
    printf("name as an integer: %d\n", *name);
    printf("name as an integer + 1: %d\n", *name + 1);

    int name_plus_one = *name + 1;
    printf("name_plus_one as an integer: %s\n", name_plus_one);
    return 0;
}
