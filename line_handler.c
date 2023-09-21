#include "monty.h"

/**
 * line_handler - interprets and decodes each line in the .m file
 *
 * Return: no return value
 */

void line_handler()
{
	int i = 0;

	args->tokenum = 0;
	tokenizer();
	run_command();
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
}
