#include "unity.h"
#include "Sorting.h"

void should_sort_array_with_bubble_sort(void)
{
    int array[] = { 5, 4, 0, 1, -3 };

    bubble_sort(array, 5);

    TEST_ASSERT_EQUAL(-3, array[0]);
    TEST_ASSERT_EQUAL(0, array[1]);
    TEST_ASSERT_EQUAL(1, array[2]);
    TEST_ASSERT_EQUAL(4, array[3]);
    TEST_ASSERT_EQUAL(5, array[4]);
}

void should_apply_reverse_sort_order(void)
{
    int numbers[] = { 1, 4, 9, 12 };

    reverse(numbers, 4);

    TEST_ASSERT_EQUAL(12, numbers[0]);
    TEST_ASSERT_EQUAL(9, numbers[1]);
    TEST_ASSERT_EQUAL(4, numbers[2]);
    TEST_ASSERT_EQUAL(1, numbers[3]);
}
