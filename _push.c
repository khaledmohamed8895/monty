#include "monty.h"
/**
 * _op_push - ....
 * @stack: ...
 * @line_number: .....
 * Return: ......
 */

void _op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	char *ch;
	int data;

	ch = strtok(NULL, " ,\n");
	if (ch == NULL)
	{
		_free_stack(stack);
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(y.file);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(y.file);
		exit(EXIT_FAILURE);
	}

	data = atoi(ch);

	new->n = data;
	new->prev = NULL;

	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
}
