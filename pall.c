#include "monty.h"

/**
 * pall - prints all values of the stack
 * @stack: stack to be printed
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void pall(stack_t **stack, unsigned int l_num)
{
	stack_t *stk_ptr = *stack;

	(void) l_num;
	while (stk_ptr != NULL)
	{
		printf("%d\n", stk_ptr->n);
		stk_ptr = stk_ptr->next;
	}
}
