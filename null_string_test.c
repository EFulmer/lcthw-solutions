#include <stdio.h>

int main(int argc, char *argv[])
{
    char full_name[] = {
        'E', 'r', 'i', 'c',
        ' ', 'R', '.', ' ',
        'F', 'u', 'l', 'm', 'e', 'r'
    };
    printf("Printing out non-null-terminated char array full_name: %s\n", full_name);

    int counter = 0;
    while (full_name[counter]) {
        printf("Char at %d = %c\n", counter, full_name[counter]);
        counter++;
    }
    return 0;
}
