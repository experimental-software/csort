#include <stdlib.h>
#include <error.h>
#include <Arguments.h>
#include <Utils.h>


int main (int argc, char **argv)
{
  int i, j;
  struct arguments arguments;

  arguments.algorithm = "bubble_sort";
  argp_parse (&argp, argc, argv, 0, 0, &arguments);

  int numbers[arguments.n];
  to_int_array(arguments.numbers, numbers, arguments.n);

  printf ("Number of numbers: %d ", arguments.n);
  printf ("NUMBERS = ");

  for (j = 0; arguments.numbers[j]; j++) {
	  printf (j == 0 ? "%d" : ", %d", numbers[j]);
  }

  printf ("\n");
  printf ("Algorithm = %s\n", arguments.algorithm);

  exit (0);
}
