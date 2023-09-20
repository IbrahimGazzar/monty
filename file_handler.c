#include "monty.h"
#include <stdio.h>

/**
 * file_handler - handles the file passed to the program
 * @filename: name of the file to be opened
 *
 * Return: no return value
 */

void file_handler(char *filename)
{
	size_t siz = 0;

	args->fp = fopen(filename, "r");
	if (args->fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while(feof(args->fp) == 0)
	{
		args->line_n += 1;
		getline(&(args->line), &siz, args->fp);
		line_handler();
	}
}
