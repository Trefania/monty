#include "monty.h"

/**
 * _pint - prints value top of the stack
 * @stack: stores the data
 * line_nums: number of instructions 
 */

void pint(stack_t **stack, unsigned int line_nums)
{
	if(*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_nums);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
