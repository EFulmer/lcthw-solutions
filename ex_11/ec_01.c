// Exercise 11, Extra Credit 1:
// Assign the characters into numbers, and then use printf to print them one character at a time.
// What kind of compiler warnings do you get?
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 'a', 'b', 'c', 'd' };

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    return 0;
}

// No warnings, on gcc 9.3.0...
// If you use %c as the format string, they're printed out as characters.
// If you use %d, they're printed out as 97, 98, 99, and 100.
// Shouldn't C only allow implicitly casting unsigned ints as characters?
