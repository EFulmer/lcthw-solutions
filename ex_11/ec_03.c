// Exercise 11, Extra Credit 3:
// In how many other ways can you print this out?

#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[4] = { 'a' };

    printf("name each: %d %d %d %d\n",
            name[0], name[1], name[2], name[3]);
    printf("name: %c\n", name); // prints something random, whatever's at the memory address?
    printf("name: %c\n", *name); // prints "A"
    printf("name: %s\n", name); // also prints "A"
    printf("name: %X\n", *name); // prints 61, the hex version of 97 (char code of 'a')
}
