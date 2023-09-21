#include "monty.h"

/**
 * unknown_instruction - shows an error message in case of a wrong opcode
 *
 * Return: no return value
 */

void unknown_instruction()
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			args->line_n, args->tokens[0]);
	free_arg();
	exit(EXIT_FAILURE);
}
