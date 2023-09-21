#include "monty.h"

/**
 * div - divides the second element of the stack by the top
 * @stack: stack to be modified
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void divide(stack_t **stack, unsigned int l_num)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", l_num);
		free_arg();
		exit(EXIT_FAILURE);
	}
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_num);
		free_arg();
		exit(EXIT_FAILURE);
	}
	tmp->next->n /= tmp->n;
	*stack = tmp->next;
	(*stack)->prev = NULL;
	free(tmp);
}
