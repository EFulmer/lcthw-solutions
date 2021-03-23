// Exercise 15, Extra Credit 7
// Rewrite this program to use a function for each of the ways you're printing out things.
// Try to pass pointers to these functions so that they work on the data.
// Remember you can declare a function to accept a pointer, but just use it like an array.
#include <stdio.h>

void print_arrays_with_simple_counter();
void print_separator();
void print_arrays_with_pointers();
void print_arrays_as_pointers();
void print_arrays_with_annoying_pointer_arithmetic();
void print_pointers();

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);

    // first way using indexing
    print_arrays_with_simple_counter(names, ages, count);
    print_separator();

    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;

    // second way using pointers
    print_arrays_with_pointers(cur_name, cur_age, count);
    print_separator();

    // third way, pointers are just arrays
    print_arrays_as_pointers(cur_name, cur_age, count);
    print_separator();

    // fourth way with pointers in a stupid complex way
    print_arrays_with_annoying_pointer_arithmetic(names, ages, count);
    print_separator();

    // print pointers:
    print_pointers(cur_age, cur_name, count);

    return 0;
}

void print_arrays_with_simple_counter(char *array_1[], int *array_2, int count)
{
    for (int i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", array_1[i], array_2[i]);
    }
}

void print_separator()
{
    printf("---\n");
}

void print_arrays_with_pointers(char **head_of_name, int* head_of_age, int count)
{
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
                *(head_of_name + i), *(head_of_age + i));
    }
}

void print_arrays_as_pointers(char **name_ptr, int *age_ptr, int count)
{
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", name_ptr[i], age_ptr[i]);
    }
}

void print_arrays_with_annoying_pointer_arithmetic(char **name_ptr, int *age_ptr, int count)
{
    char **cur_name = name_ptr;
    int *cur_age = age_ptr;
    for (; (cur_age - age_ptr) < count; cur_name++, cur_age++) {
        // The reason we have to dereference the pointers in this one is because the bracket notation implicitly does that?
        printf("%s has lived for %d years so far.\n", *cur_name, *cur_age);
    }
}

void print_pointers(int *age_addr, int *name_addr, int count)
{
    for (int i = 0; i < count; i++) {
        printf("cur_age points to the address %p, and cur_name points to the address %p.\n",
                (age_addr + i), (name_addr + i));
    }
}
