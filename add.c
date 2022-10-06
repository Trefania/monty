#include "monty.h"

/**
 * add - adds the top two elements of the stack
 *@sum: integer value
 *
 */
void add(stack_t **stack, unsigned int line_nums)
{
	int sum;

	if(sum < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_nums);
		exit(EXIT_FAILURE);
	}
	sum = ((*stack)->next->n)+((*stack)->n);
	pop(stack, line_nums);
	(*stack)->n = sum;
}
