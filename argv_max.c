#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    // This doesn't seem to do what I want...
    printf("Max args is %d.\n", sysconf(_SC_ARG_MAX));
    return 0;
}
