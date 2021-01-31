// Exercise 10, Extra Credit 5:
// In the case for 'Y' I have the break outside of the if-statement.
// What's the impact of this, and what happens if you move it inside of the if-statement.
// Prove to yourself that you're right.
//
// Answer: What happens if the break is inside of that if-statement, is that if
// 'Y' is the first letter of the word it'll be printed with "not a vowel."
// The way 'Y' is handled should probably be completely different, but I don't
// know the technical aspects of English grammar well enough to handle every
// case when 'Y' is a consonant and when it is a vowel.
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
        for (i = 0, letter = to_lower(argv[l][i]);
                argv[l][i] != '\0';
                i++, letter = to_lower(argv[l][i])
                ) {

            switch (letter) {
                case 'a':
                    printf("%d, %d: 'a'\n", l, i);
                    break;

                case 'e':
                    printf("%d, %d: 'e'\n", l, i);
                    break;

                case 'i':
                    printf("%d, %d: 'j'\n", l, i);
                    break;

                case 'o':
                    printf("%d, %d: 'o'\n", l, i);
                    break;

                case 'u':
                    printf("%d, %d: 'u'\n", l, i);
                    break;

                case 'y':
                    // why i > 2? is this a bug?
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d, %d: 'y'\n", l, i);
                        break;
                    }

                default:
                    printf("%d, %d: %c is not a vowel\n", l, i, letter);
            }
        }
    }

    return 0;
}
