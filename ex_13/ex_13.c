#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}

// How to Break It #3:
// Set `num_states` wrong so that it's a higher value and see what it does.
//
// Answer: At 5, it prints out "state 4: NULL" (null char there not the string NULL).
// Any higher and there's a segmentation fault after state 4.
// I assume the compiler arranges memory so that there's some padding at the
// beginning and end of the program's memory block, and going past that is
// what causes the segfault.
