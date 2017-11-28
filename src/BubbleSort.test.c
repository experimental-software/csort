#include "../unity/src/unity.h"
#include "BubbleSort.h"

void should_keep_sorted_array_untouched(void)
{
	int simple_array [] = {4, 5};

	bubble_sort(simple_array, 2);

	TEST_ASSERT_EQUAL( simple_array[0] , 4 );
	TEST_ASSERT_EQUAL( simple_array[1] , 5 );
}

void should_sort_simple_array(void)
{
	int simple_array [] = {5, 4};

	bubble_sort(simple_array, 2);

	TEST_ASSERT_EQUAL( simple_array[0] , 4 );
	TEST_ASSERT_EQUAL( simple_array[1] , 5 );
}

void should_support_array_with_one_element(void)
{
	// TODO
}


int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(should_keep_sorted_array_untouched);
	RUN_TEST(should_sort_simple_array);
	return UNITY_END();
}
