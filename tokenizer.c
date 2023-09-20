#include "monty.h"

/**
 * tokenizer - turns a given string into an array of words
 *
 * Return: no return value
 */

void tokenizer()
{
	int i = 0;
	char *delims = " \t\n", *token = NULL;
	char *cpy = malloc(sizeof(char) * strlen(args->line) + 1);

	if (cpy == NULL)
		malloc_fail();
	strcpy(cpy, args->line);
	token = strtok(cpy, delims);
	while (token)
	{
		(args->tokenum)++;
		token = strtok(NULL, delims);
	}
	args->tokens = malloc(sizeof(char *) * (args->tokenum + 1));
	if (args->tokens == NULL)
		malloc_fail();
	strcpy(cpy, args->line);
	token = strtok(cpy, delims);
	while (token)
	{
		args->tokens[i] = malloc(sizeof(char) * strlen(token) + 1);
		if (args->tokens[i] == NULL)
			malloc_fail();
		strcpy(args->tokens[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	args->tokens[i] = NULL;
}
