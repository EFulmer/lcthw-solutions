// Exercise 14, Extra Credit 2:
// Have `print_arguments figure out how long each argument string is by using the `strlen` function, and then pass that length to `print_letters`.
// Then rewrite `print_letters` so that it only processes this fixed length and doesn't rely on the '\0' terminator.
// You'll need the `#include <string.h>` for this.
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
    return isalpha((int)ch) || isblank((int)(ch));
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
