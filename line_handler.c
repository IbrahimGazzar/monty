#include "monty.h"

/**
 * line_handler - interprets and decodes each line in the .m file
 *
 * Return: no return value
 */

void line_handler(void)
{
	int i = 0;

	args->tokenum = 0;
	tokenizer();
	run_command();
       	while (args->tokens[i])
	{
		free(args->tokens[i]);
		i++;
	}
	free(args->tokens);
	args->tokens = NULL;
}
