#include "monty.h"

args_t *args = NULL;
stack_t *stack = NULL;
/**
 * main - main function that handles the execution
 * @argc: number of arguements passed to the program
 * @argv: the arguments passed
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	args = malloc(sizeof(args_t));
	if (args == NULL)
		malloc_fail();
	args->instruct = malloc(sizeof(instruction_t));
	if (args->instruct == NULL)
		malloc_fail();
	args->fp = NULL;
	args->line = NULL;
	args->tokenum = 0;
	args->line_n = 0;
	stack = NULL;
	file_handler(argv[1]);
	free_arg();
	return (0);
}
