#include "monty.h"
#include <stdlib.h>

/*
<<<<<<< HEAD
 * push - pushes an element to the stack.
 * @stack: checks if it's an integer
 * @line_nums: string convert to int
=======
 * _push - pushes an element to the stack.
 * @ac: checks if it's an integer
 * @av: string convert to int
>>>>>>> 0999a75921618a4b411ada9c86fb64474ce19540
 */
void push(stack_t **stack, unsigned int line_nums)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_nums);
		exit(EXIT_FAILURE);
	}

	if (global.data_struct == 1)
	{
		if (!node_add(stack, atoi(global.argument)))
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
