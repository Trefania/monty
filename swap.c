#include"monty.h"

/**
 *
 *
 *
 */

void swap(stack_t **stack, unsigned int line_nums)
{
	int temp;

	if(*stack < 2)
	{
		print("L%d: can't swap, stack too short");
	}

	temp = ((*stack)->next->n);
	((*stack)->next->n) = ((*stack)->n);
	add(stack, line_nums);
}


