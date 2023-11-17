#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
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
 * val_s - struct to file pointer
 * @file: file pointer
 * Description: structure file pointer
 */
typedef struct val_s
{
	FILE *file;
} val_t;
extern val_t y;

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

int _find_opcode(char *opcode, instruction_t operators_code[]);

void _free_stack(stack_t **stack);

void run(stack_t **stack, char *filename);

void _instructError(int count, char *line_copy);
void _fileError(const char *file);
void _argcError(void);
void _op_push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack,
		   unsigned int line_number __attribute__((unused)));
void _op_pint(stack_t **stack, unsigned int line_number);
void _op_pop(stack_t **stack, unsigned int line_number);
void _op_swap(stack_t **stack, unsigned int line_number);
void _op_add(stack_t **stack, unsigned int line_number);
void o_nop(stack_t **stack __attribute__((unused)),
		   unsigned int line_number __attribute__((unused)));
void _op_sub(stack_t **stack, unsigned int line_number);
void _op_div(stack_t **stack, unsigned int line_number);
void _op_mul(stack_t **stack, unsigned int line_number);
void _op_mod(stack_t **stack, unsigned int line_number);
void _op_pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number __attribute__((unused)));
void _rotl(stack_t **stack, unsigned int line_number __attribute__((unused)));

#endif
