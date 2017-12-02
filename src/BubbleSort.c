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

void bubble_sort(int *array, int number_of_elements)
{
	int i, temp;
    int n = number_of_elements;

    while(n--) {
    	for (i = 1; i <= n; i++) {
    		if (array[i-1] > array[i]) {
    			temp = array[i];
    			array[i] = array[i - 1];
    			array[i-1] = temp;
    		}
    	}
    }
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

