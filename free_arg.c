#include "monty.h"

/**
 * free_arg - frees all the used arguements
 *
 * Return: no return value
 */

void free_arg()
{
	int i = 0;
	stack_t *tmp;

	if (args == NULL)
		return;
	if (args->fp != NULL)
	{
		fclose(args->fp);
		args->fp = NULL;
	}
	free(args->line);
	free(args->instruct);
	args->line = NULL;
	args->instruct = NULL;
	if (args->tokens != NULL)
	{
		while (args->tokens[i])
		{
			free(args->tokens[i]);
			i++;
		}
		free(args->tokens);
		args->tokens = NULL;
	}
	free(args);
	if (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
