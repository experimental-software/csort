#include "unity.h"
#include "BubbleSort.h"

void should_keep_sorted_array_untouched(void)
{
    int simple_array[] = { 4, 5 };

    bubble_sort(simple_array, 2);

    TEST_ASSERT_EQUAL(4, simple_array[0]);
    TEST_ASSERT_EQUAL(5, simple_array[1]);
}

void should_sort_simple_array(void)
{
    int simple_array[] = { 5, 4 };

    bubble_sort(simple_array, 2);

    TEST_ASSERT_EQUAL(4, simple_array[0]);
    TEST_ASSERT_EQUAL(5, simple_array[1]);
}

void should_sort_array_with_five_elements(void)
{
    int array[] = { 5, 4, 0, 1, -3 };

    bubble_sort(array, 5);

    TEST_ASSERT_EQUAL(-3, array[0]);
    TEST_ASSERT_EQUAL(0, array[1]);
    TEST_ASSERT_EQUAL(1, array[2]);
    TEST_ASSERT_EQUAL(4, array[3]);
    TEST_ASSERT_EQUAL(5, array[4]);
}
