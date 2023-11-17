#include "monty.h"
/**
 * _op_sub - .
 * @stack: .
 * @line_number: .
 * Return: .
 */
void _op_sub(stack_t **stack, unsigned int line_number)
{
	int a, b, sub;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{

		_free_stack(stack);
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(y.file);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = *stack;
		a = (*stack)->n;
		b = (*stack)->next->n;
		sub = b - a;
		(*stack)->next->n = sub;

		(*stack)->next->prev = NULL;
		*stack = (*stack)->next;
		free(temp);
	}
}
