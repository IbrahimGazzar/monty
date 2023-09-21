#include "monty.h"

/**
 * swap - swaps the top two values of a stack
 * @stack: stack to be modified
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void swap(stack_t **stack, unsigned int l_num)
{
	stack_t *tmp1, *tmp2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_num);
		
		exit(EXIT_FAILURE);
	}
	tmp1 = *stack;
	tmp2 = (*stack)->next;
	tmp1->next = tmp2->next;
	if (tmp1->next != NULL)
		tmp1->next->prev = tmp1;
	tmp2->prev = NULL;
	tmp2->next = tmp1;
	tmp1->prev = tmp2;
	*stack = tmp2;
}
