#include "unity.h"
#include "BubbleSort.h"

void testShould_keep_sorted_array_untouched(void)
{
	int simple_array [] = {4, 5};

	bubble_sort(simple_array);

	TEST_ASSERT_EQUAL(4, simple_array[0]);
	TEST_ASSERT_EQUAL(5, simple_array[1]);
}

void should_sort_simple_array(void)
{
	int simple_array [] = {5, 4};

	bubble_sort(simple_array);

	TEST_ASSERT_EQUAL(4, simple_array[0]);
	TEST_ASSERT_EQUAL(5, simple_array[1]);
}

void should_support_array_with_one_element(void)
{
	// TODO
}


void testGetSampleShouldDelegateToAdcTemperatureSensor(void)
{
  TEST_ASSERT_EQUAL(847, 1);
}



