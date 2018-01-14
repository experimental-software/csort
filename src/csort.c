#include <stdlib.h>
#include <error.h>
#include <Arguments.h>
#include <Utils.h>
#include <BubbleSort.h>

int main(int argc, char **argv)
{
    struct arguments arguments;
    arguments.algorithm = "bubble_sort";
    argp_parse(&argp, argc, argv, 0, 0, &arguments);

    int numbers[arguments.n];
    to_int_array(arguments.numbers, numbers, arguments.n);

    bubble_sort(numbers, arguments.n);

    print_results(numbers, arguments.n);

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
