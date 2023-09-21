#include "monty.h"

/**
 * malloc_fail - called to exit program on a malloc failure
 *
 * Return: no return value
 */

void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_arg();
	exit(EXIT_FAILURE);
}
