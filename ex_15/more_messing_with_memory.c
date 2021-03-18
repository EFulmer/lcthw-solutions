#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = { 23, 43, 12, 89, 2 };

    printf("Address of the first element of ages = 0x%X.\n", ages);
    printf("First element of ages = %d.\n", ages[0]);
    printf("Address of ages + 1 =  0x%X.\n", ages + 1);
    printf("(ages + 1) - ages == %d (should be 1)\n", (ages + 1) - ages);

    return 0;
}
