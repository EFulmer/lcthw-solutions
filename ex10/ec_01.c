// Exercise 10, Extra Credit 1:
// Write another program that uses math on the letter to convert it to lowercase, and then remove all the extraneous uppercase letters in the switch.
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
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program.
        return 1;
    }

    int i = 0;

    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = to_lower(argv[1][i]);

        switch (letter) {
            case 'a':
                printf("%d: 'a'\n", i);
                break;

            case 'e':
                printf("%d: 'e'\n", i);
                break;

            case 'i':
                printf("%d: 'j'\n", i);
                break;

            case 'o':
                printf("%d: 'o'\n", i);
                break;

            case 'u':
                printf("%d: 'u'\n", i);
                break;

            case 'y':
                // why i > 2? is this a bug?
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}
