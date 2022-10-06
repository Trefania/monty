#include "monty.h"

/*
 * _pall - prints all the values on the stack, top to bottom
 * @stack: stores the data
 * @line_number: num of instructions
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int i = 0;

	if(*stack == NULL)
		return;

	temp = *stack;

	while (temp)
	{
		i = temp->i;
		printf("%d\n", i);
		temp = temp->next;
	}
}
