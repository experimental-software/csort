/*
 * BubbleSort.c
 *
 *  Created on: 28.11.2017
 *      Author: janux
 */

#include "DumbExample.h"

void bubble_sort(int *array, int number_of_elements)
{
	int a = array[0];
	int b = array[1];

	if (a > b) {
		array[0] = b;
		array[1] = a;
	}
}

