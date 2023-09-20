#include "monty.h"

/**
 * line_handler - interprets and decodes each line in the .m file
 *
 * Return: no return value
 */

void line_handler()
{
	tokenizer();
	run_command();
}
