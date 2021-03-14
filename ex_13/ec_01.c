// Exercise 13, Extra Credit #1:
// Figure out what kind of code you can put into the parts of a for-loop.
//
// Answer: From the C99 standard, the initializer and incrementer parts are
// treated as void statements (they don't return anything), but the
// test/conditional needs to be a scalar (non struct). If the test isn't
// provided, it's treated as if it was a nonzero (IOW, true)
//
// Let's test it out:
#include <stdio.h>

struct loop_ruiner {
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    // Experimenting wtih the test part of the for:
    // This will print "fail" forever because in the conditional,
    // vec is treated as its address.
    // int vec[] = {0, 1};
    // for (; vec; )
    // {
    //     printf("fail");
    // }

    // This won't compile.
    // struct loop_ruiner lr;
    // for (; lr; )
    // {
    // }

    // This doesn't run ever; assignment statements return false? Or have no return?
    for (int i = 10; (i = 0); i--)
    {
        printf("i = %d\n", i);
    }

    // Trying to initialize a variable in the conditional part of a for loop
    // won't compile. Think initializations are interpreted as a void statement.
    // for (int i = 0; int j = 1; i++)
    // {
    //     printf("hi\n");
    // }

    // This will run forever, because printf returns the number of characters printed.
    // for (int i = 10; printf("test\n"); i++)
    // {
    //     printf("hi\n");
    // }

    // This doesn't run ever, because printf returns 0, which is interpreted as false.
    for (int i = 10; printf(""); i++)
    {
    }

    // Experimenting with the initializer part of the for:
    // This will print "what" forever.
    // for (;;)
    // {
    //     printf("what");
    // }

    // This will compile and print "hi".
    for (printf("hi\n"); 0; 1 + 1)
    {
    }

    // This just prints "hi2", the loop never evaluates because 0 is false.
    for (printf("hi2\n"); 0; printf("hi3\n"))
    {
    }

    // Experimenting with incrementer part of the for loop (also done in above):
    // This will print "hi4" two times.
    for (int i = 0; i < 2; i++, printf("hi4\n"))
    {
    }

    return 0;
}
