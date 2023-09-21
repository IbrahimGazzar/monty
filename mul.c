#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack
 * @stack: stack to be modified
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void mul(stack_t **stack, unsigned int l_num)
{
        stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l_num);
		free_arg();
		exit(EXIT_FAILURE);
	}
	tmp->next->n *= tmp->n;
	*stack = tmp->next;
	(*stack)->prev = NULL;
	free(tmp);
}
