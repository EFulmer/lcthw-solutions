// Exercise 14, Extra Credit 3:
// Use `man` to look up information on `isalpha` and `isblank`.
// Use other similar functions to print out only digits or other characters.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print(char ch);
void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    char *str_i;

    for (i = 0; i < argc; i++) {
        str_i = argv[i];
        print_letters(str_i, strlen(str_i));
    }
}

void print_letters(char arg[], int length)
{
    int i = 0;

    for (i = 0; i < length; i++) {
        char ch = arg[i];

        if (can_print(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print(char ch)
{
    return isxdigit((int) ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
