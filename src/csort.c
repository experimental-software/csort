/*
 ============================================================================
 Name        : csort.c
 Author      : Jan Mewes
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	argp_parse (0, argc, argv, 0, 0, 0);
	puts("Hello, C World"); /* prints Hello, C World */
	return EXIT_SUCCESS;
}