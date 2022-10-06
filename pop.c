#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: given by main in start.c
 * @line_nums: counting the error message
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_nums)
{
	stack_t *temp = NULL;

	if (stack  == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_nums);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (*stack == NULL)
		return;

	(*stack)->prev = NULL;
}

