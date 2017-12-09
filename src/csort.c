#include <stdlib.h>
#include <error.h>
#include <argp.h>

static char doc[] = "The purpose of this program is to sort integer numbers.";
static char args_doc[] = "NUMBER...";

static struct argp_option options[] = {
  {"algorithm",  'a', 0,       0, "The algorithm to be used for sorting" },
  {"reverse",    'r', 0,       0, "Print out the sort results in reverse order" },
  { 0 }
};

struct arguments
{
  int n;
  char **numbers;
  char *algorithm;
};

static error_t parse_opt (int key, char *arg, struct argp_state *state)
{
  struct arguments *arguments = state->input;

  arguments->n = state->arg_num;

  switch (key)
    {
    case 'a':
      arguments->algorithm = arg;
      break;

    case ARGP_KEY_NO_ARGS:
      argp_usage (state);

    case ARGP_KEY_ARG:
      arguments->numbers = &state->argv[state->next - 1];
      state->next = state->argc;
      break;

    default:
      return ARGP_ERR_UNKNOWN;
    }
  return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };

int main (int argc, char **argv)
{
  int i, j;
  struct arguments arguments;

  arguments.algorithm = "bubble_sort";
  argp_parse (&argp, argc, argv, 0, 0, &arguments);

  printf ("Number of numbers: %d ", arguments.n);
  printf ("NUMBERS = ");
  for (j = 0; arguments.numbers[j]; j++)
    printf (j == 0 ? "%s" : ", %s", arguments.numbers[j]);
  printf ("\n");
  printf ("Algorithm = %s\n", arguments.algorithm);

  exit (0);
}
