// Exercise 11, Extra Credit 2:
// Do the inverse for name, trying to treat it like an array of int and print it out
// one int at a time. What does the debugger think of that?

#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[4] = { 'a' };

    printf("name each: %d %d %d %d\n",
            name[0], name[1], name[2], name[3]);
}

// Answer: no warnings are given (with gcc -Wall)
// but it prints out 97 0 0 0.
