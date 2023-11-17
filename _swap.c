#include "monty.h"
/**
 * _op_swap - .
 * @stack: .
 * @line_number: .
 * Return: .
 */
void _op_swap(stack_t **stack, unsigned int line_number)
{
	int a, b, temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{

		_free_stack(stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(y.file);
		exit(EXIT_FAILURE);
	}
	else
	{
		a = (*stack)->n;
		b = (*stack)->next->n;
		temp = b;
		b = a;
		a = temp;
		(*stack)->n = a;
		(*stack)->next->n = b;
	}
}
