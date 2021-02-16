#include <stdio.h>

int main(int argc, char *argv[])
{
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w'
    };
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Z\0d";

    printf("The size of an int: %ld\n", sizeof(int));
    printf("the size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas: %ld\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[10]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n",
            sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}

// How to Break It
// 1a. Get rid of the '\0' at the end of full_name and re-run it.
//      The size of full_name becomes 11. Assume the compiler puts a '\0' at the end?
//      Apparently, this isn't the case! https://stackoverflow.com/a/5290884/1893155
//      (There are some C string functions that automatically append the null terminator.)
//
//      ... Also, %ls format specifier does get an error. I should watch the videos for this exercise.
// 1b. Run it under the debugger, too.
//      ... Still nothing. I suppose I am lucky!
// 1c. Now, move the definition of full_name to the top of main before areas. Try running it under the debugger
//     a few times and see if you get some new errors.
//      Nothing!
// 2. Change it so that instead of areas[0] you try to print areas[10]. See what the debugger thinks of that.
//      Prints whatever the 4 bytes starting from (&areas) + sizeof(int) * 10 are.
// 3. Try other ways to break it like this, doing it to name and full_name too.
