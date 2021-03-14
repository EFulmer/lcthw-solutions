// Exercise 13, Extra Credit 4:
// See if you can assign an element from the `states` array to the `argv` array before printing both.
// Try the inverse.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = sizeof(states) / sizeof(states[0]);

    // Assign an element from states to argv:
    // argv[1] = states[0];
    // Assign an element from argv to states:
    // states[0] = argv[1];
    //
    // Both seemingly work fine.
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
