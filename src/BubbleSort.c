/*
 * BubbleSort.c
 *
 *  Created on: 28.11.2017
 *      Author: janux
 */

#include "stdlib.h"
#include "stdio.h"

int min(int a, int b);
int max(int a, int b);

void bubble_sort(int *array)
{
	int pair[] = {array[0], array[1]};

	array[0] = min(pair[0], pair[1]);
	array[1] = max(pair[0], pair[1]);
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

