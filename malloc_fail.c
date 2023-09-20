#include "monty.h"

/**
 * malloc_fail - called to exit program on a malloc failure
 *
 * Return: no return value
 */

void malloc_fail()
{
	fprintf(stderr, "Error: malloc failed\n");
	
	exit(EXIT_FAILURE);
}
