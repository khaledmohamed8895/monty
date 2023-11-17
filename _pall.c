#include "monty.h"
/**
 * _pall - ...
 * @stack: ...
 * @line_number: ...
 * Return: ....
 */
void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{

	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
