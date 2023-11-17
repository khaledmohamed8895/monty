#include "monty.h"
/**
 * _op_pop - ...
 * @stack: ...
 * @line_number: ....
 * Return: .....
 */
void _op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if ((*stack) == NULL)
	{

		_free_stack(stack);
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(y.file);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}

	temp = *stack;

	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(temp);
}
