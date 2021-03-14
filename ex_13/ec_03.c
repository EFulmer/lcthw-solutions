// Exercise 13, Extra Credit 3:
// Read what a NULL is and try to use it in one of the elements from the `states` array to see what it'll print.
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i = 0;

    for (i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char * states[] = {
        "California", "Oregon",
        NULL, "Texas"
    };

    int num_states = 4;

    for (int i = 0; i < num_states; i++)
    {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}

// Answer:
// Just prints (null).
