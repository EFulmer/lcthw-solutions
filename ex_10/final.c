// Exercise 10, Refactored
// Changes made include:
// 1. Massively simplifying the conditional.
// 2. Extracting into functions.
// 3. Fixing the error where I accidentally put 'j' instead of 'i'.
// 4. Fixing the issue with 'y'.
#include <stdio.h>

char to_lower(char c)
{
    if ('Z' >= c && c >= 'A') {
        return c + 32;
    }
    return c;
}

void print_letter(char letter, int char_index)
{
    char lc_letter = to_lower(letter);

    if (lc_letter == 'a'
        || lc_letter == 'e'
        || lc_letter == 'i'
        || lc_letter == 'o'
        || lc_letter == 'u'
    ) {
        printf("%d: '%c'\n", char_index, letter);
    } else if (lc_letter == 'y' && char_index > 0) {
        // it's only sometimes Y
        printf("%d: '%c'\n", char_index, letter);
    } else {
        printf("%d: '%c' is not a vowel\n", char_index, letter);
    }
}

void print_word(char word[])
{
    int i;
    char letter;
    for (i = 0, letter = word[i];
            word[i] != '\0';
            i++, letter = word[i]
    ) {
        print_letter(letter, i);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("ERROR: You need at least one argument.\n");
        // this is how you abort a program.
        return 1;
    }

    int l; // loop counter

    for (l = 1; l < argc; l++) {
        printf("Word %d:\n", l);
        print_word(argv[l]);
    }

    return 0;
}
