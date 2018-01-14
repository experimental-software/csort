#include "unity.h"
#include "Utils.h"
#include <stdlib.h>

void should_transform_char_array_to_number_array(void)
{
    char *numbers_as_strings[] = { "234", "-4", "0", "2" };

    int numbers_as_integers[4];
    to_int_array(numbers_as_strings, numbers_as_integers, 4);

    TEST_ASSERT_EQUAL_INT(234, numbers_as_integers[0]);
    TEST_ASSERT_EQUAL_INT(-4, numbers_as_integers[1]);
    TEST_ASSERT_EQUAL_INT(0, numbers_as_integers[2]);
    TEST_ASSERT_EQUAL_INT(2, numbers_as_integers[3]);
}

