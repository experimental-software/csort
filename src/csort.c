#include <stdlib.h>
#include <error.h>
#include <Arguments.h>
#include <Utils.h>
#include <Sorting.h>

void print_results(int *numbers, size_t n);

int main(int argc, char **argv)
{
    // Evaluate arguments
    struct arguments arguments;
    argp_parse(&argp, argc, argv, 0, 0, &arguments);

    int numbers[arguments.number_of_numbers];
    to_int_array(arguments.numbers, numbers, arguments.number_of_numbers);

    // Sort the numbers
    bubble_sort(numbers, arguments.number_of_numbers);

    // Reverse sort order if requested
    if (arguments.reverse_sort == 2)
    {
        reverse(numbers, arguments.number_of_numbers);
    }

    // Print the results on the terminal
    print_results(numbers, arguments.number_of_numbers);

    exit(0);
}

void print_results(int *numbers, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
