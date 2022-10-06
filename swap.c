#include"monty.h"

/**
 *swap - swaps first two elemnts
 *@temp: integer storage
 *
 */

void swap(stack_t **stack, unsigned int line_nums)
{
	stack_t *tmp = NULL;
	int temp = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_nums);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	temp = tmp->n;
	tmp->n = temp;

	tmp->n = tmp->next->n;
	tmp->next->n = temp;
}


