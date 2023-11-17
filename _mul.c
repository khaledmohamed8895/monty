#include "monty.h"
/**
 * _op_mul - ....
 * @stack: .....
 * @line_number: ....
 * Return: .....
 */
void _op_mul(stack_t **stack, unsigned int line_number)
{
	int a, b, m;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{

		_free_stack(stack);
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = *stack;
		a = (*stack)->n;
		b = (*stack)->next->n;
		m = a * b;
		(*stack)->next->n = m;

		(*stack)->next->prev = NULL;
		*stack = (*stack)->next;
		free(temp);
	}
}
