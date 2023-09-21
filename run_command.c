#include "monty.h"

/**
 * run_command - runs a line passed to it from the monty file
 *
 * Return: no return value
 */

void run_command()
{
	int i = 0;
	instruction_t instructs[] = {
		{"push", &push}, {"pall", &pall},
		{"pint", &pint}, {"pop", &pop},
		{"swap", &swap}, {"add", &add},
		{"nop", &nop}, {NULL, NULL}
	};

	if (args->tokenum == 0 || args->tokens[0] == NULL)
		return;
	args->instruct->opcode = NULL;
	for (i = 0; instructs[i].opcode != NULL; i++)
	{
		if (strcmp(instructs[i].opcode, args->tokens[0]) == 0)
		{
			args->instruct->opcode = instructs[i].opcode;
			args->instruct->f = instructs[i].f;
		}
	}
	if (args->instruct->opcode == NULL)
		unknown_instruction();
	args->instruct->f(&stack, args->line_n);
}
