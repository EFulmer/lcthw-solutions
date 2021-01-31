// Exercise 10, Extra Credit 4:
// Convert this switch-statement to an if-statement. Which do you like better?
#include <stdio.h>

// I'm aware there's a standard library tolower function, but the point is education.
char to_lower(char c)
{
    if ('Z' >= c && c >= 'A') {
        return c + 32;
    }
    return c;
}


int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("ERROR: You need at least one argument.\n");
        // this is how you abort a program.
        return 1;
    }

    int l; // loop counter
    int i = 0;
    char letter;

    for (l = 1; l < argc; l++) {
        for (i = 0, letter = to_lower(argv[1][i]);
                argv[1][i] != '\0';
                i++, letter = to_lower(argv[1][i])
                ) {

            if (letter == 'a') {
                printf("%d, %d: 'a'\n", l, i);
            } else if (letter == 'e') {
                printf("%d, %d: 'e'\n", l, i);
            } else if (letter == 'i') {
                printf("%d, %d: 'j'\n", l, i);
            } else if (letter == 'o') {
                printf("%d, %d: 'o'\n", l, i);
            } else if (letter == 'u') {
                printf("%d, %d: 'u'\n", l, i);
            } else if (letter == 'y') {
                // why i > 2? is this a bug?
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d, %d: 'y'\n", l, i);
                }
            } else {
                printf("%d, %d: %c is not a vowel\n", l, i, letter);
            }
        }
    }

    return 0;
}
