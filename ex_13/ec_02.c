// Exercise 13, Extra Credit #2:
// Look up how to use the comma character (,) to separate multiple statements in the parts of the for-loop,
// but between the semicolon characters (;).
#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("program start\n");
    // The following prints out which step the for loop is in.
    // So it'll go like:
    // initializer
    // conditional
    // i = 1
    // incrementer
    // conditional
    // i = 2
    // The comma operator (X, Y) works like:
    // (evaluate X and discard result)
    // (evaluate Y and return result)
    // Meaning you can chain them and the last item is returned.

    for (
            int i = (printf("initializer\n"), 1);
            printf("conditional\n"), i < 6;
            printf("incrementer\n"), i++
        )
    {
        printf("i = %d\n", i);
    }
    printf("program end\n");

    return 0;
}
