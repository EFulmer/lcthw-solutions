// Exercise 14, Extra Credit 1:
// Rework these functions so that you have fewer functions.
// For example, do you really need `can_print_it`?
#include <stdio.h>
#include <ctype.h>

// forward declarations
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    int can_print_ch;

    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        can_print_ch = isalpha((int) ch) || isblank((int) ch);
        if (can_print_ch) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
