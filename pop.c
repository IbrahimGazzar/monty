#include "monty.h"

/**
 * pop - removes the top value of the stack
 * @stack: stack to be removed from
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void pop(stack_t **stack, unsigned int l_num)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l_num);
		
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	if ((*stack)->next != NULL)
		(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(tmp);
}
