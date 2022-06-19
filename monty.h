#ifndef MONTY_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a doubly linked list
 * @n: integer
 * @prev: points to the previous elements of the stack (or quee)
 * @next: points to the next element of the stack (or quee)
 *
 * Description: doubly linked list node structure
 * for stack, quees, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instructions_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, quees, LIFO and FIFO
 */
typedef struct instructions_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} intruction_t;

#endif /* MONTY_H_ */
