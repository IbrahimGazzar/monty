#include "monty.h"

/**
 * add - adds the top two values in a stack
 * @stack: stack to be modified
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void add(stack_t **stack, unsigned int l_num)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_num);
		
		exit(EXIT_FAILURE);
	}
	tmp->next->n += tmp->n;
	pop(&tmp, l_num);
}
