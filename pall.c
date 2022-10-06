#include "monty.h"

/*
 * _pall - prints all the values on the stack, top to bottom
 * @stack: stores the data
 * @line_number: num of instructions
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp = NULL;
	int n = 0;

	if(*stack == NULL)
		return;

	temp = *stack;

	while (temp)
	{
		n=temp->n;
		printf("%d\n", n);
		temp=temp->next;
	}
}
