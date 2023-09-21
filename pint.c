#include "monty.h"

/**
 * pint - prints the top value of the stack
 * @stack: stack to be printed
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void pint(stack_t **stack, unsigned int l_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_num);
		
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
