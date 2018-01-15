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
