#include "stdlib.h"
#include "stdio.h"

void swap_elements(int *array, int index_a, int index_b);

/**
 * https://en.wikipedia.org/wiki/Bubble_sort
 */
void bubble_sort(int *array, size_t number_of_elements)
{
    int n = number_of_elements;

    while (n--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (array[i - 1] > array[i])
            {
                swap_elements(array, i, i - 1);
            }
        }
    }
}

void swap_elements(int *array, int index_a, int index_b)
{
    int temp = array[index_a];
    array[index_a] = array[index_b];
    array[index_b] = temp;
}

void reverse(int *array, size_t number_of_elements)
{
    int sorted_array[number_of_elements];

    for (int i = 0; i < number_of_elements; i++)
    {
        int insert_index = abs(i - number_of_elements) - 1;
        sorted_array[insert_index] = array[i];
    }

    for (int i = 0; i < number_of_elements; i++)
    {
        array[i] = sorted_array[i];
    }
}
