#include "monty.h"

/**
 * pop - removes the top element of the stack.
 *
 */
void pop(stack_t **stack, unsigned int line_nums)
{
    stack_t *temp = NULL;

    if (stack  == -1)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_nums);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->next;

    free(*stack);
    *stack = temp;

    if (*stack == -1)
        return;

    (*stack)->prev = NULL;
}

