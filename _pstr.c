#include "monty.h"
/**
 * _pstr - ........
 * @stack: .........
 * @line_number: ........
 * Return: ..........
 */
void _pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
