#include "monty.h"
#include <stdlib.h>

/*
 * push - pushes an element to the stack.
 * @stack: checks if it's an integer
 * @line_nums: string convert to int
 */
void push(stack_t **stack, unsigned int line_nums)
{
	char *n = global.argument;

	if ((isxdigit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_nums);
		exit(EXIT_FAILURE);
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
}
