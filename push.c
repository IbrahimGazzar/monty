#include "monty.h"

/**
 * push - pushes a node into the stack
 * @stack: stack to be pushed in
 * @l_num: number of the line in the file
 *
 * Return: no return value
 */

void push(stack_t **stack, unsigned int l_num)
{
	stack_t *node;

	if (args->tokenum <= 1
	    || (atoi(args->tokens[1]) == 0 && strcmp(args->tokens[1], "0") != 0))
	{
		fprintf(stderr, "L%d: usage: push integer\n", l_num);
		
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
		malloc_fail();
	node->n = atoi(args->tokens[1]);
	node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = node;
	*stack = node;
}
