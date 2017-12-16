
#include <stdio.h>

#include "Utils.h"


void to_int_array(char **src, int *dest, int number_of_elements)
{
	for (int i = 0; i < number_of_elements; i++) {
		dest[i] = atoi(src[i]);
	}
}
