#include <argp.h>

static char doc[] = "The purpose of this program is to sort integer numbers.";
static char args_doc[] = "NUMBER...";

static struct argp_option options[] = { { "reverse", 'r', 0, 0,
        "Print out the sort results in reverse order" }, { 0 } };

struct arguments
{
    int number_of_numbers;
    char **numbers;
    int reverse_sort;
};

static error_t parse_opt(int key, char *arg, struct argp_state *state)
{
    struct arguments *arguments = state->input;

    arguments->number_of_numbers = state->arg_num;

    switch (key)
    {

    case ARGP_KEY_NO_ARGS:
        argp_usage(state);
        break;

    case ARGP_KEY_ARG:
        arguments->numbers = &state->argv[state->next - 1];
        state->next = state->argc;
        break;

    case 'r':
        arguments->reverse_sort = state->next;
        break;

    default:
        return ARGP_ERR_UNKNOWN;
    }
    return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };
