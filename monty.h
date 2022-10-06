#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>


#define Instructions
		("push", push),	\
		("pall", pall),	\
		("pint", pin),	\
		("pop", pop),	\
		("swap", swap),	\
		("nop", nop),	\

	{
		NULL, NULL
	}

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/**
 * struct help - argument for the current opcode
 * @data_struct: stack mode, stack (default) and queue
 * @argument: the arguments of the string
 *
 * Description: global structure used to pass data around the functions easily
 */
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

void push(stack_t **stack, unsigned int line_nums);
void pall(stack_t **stack, unsigned int line_nums);
void pint(stack_t **stack, unsigned int line_nums);
void pop(stack_t **stack, unsigned int line_nums);
void nop(stack_t **stack, unsigned int line_nums);

void opcode(stack_t **stack, char *str, unsigned int line_nums);



#endif /* MONTY_H */
