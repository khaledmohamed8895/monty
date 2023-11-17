#include "monty.h"
/**
 * _rotl - ........
 * @stack: .........
 * @line_number: ........
 * Return: ..........
 */
void _rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;
	int first, sec, last, a, b;

	temp = *stack;
	while (temp != NULL)
	{
		temp = temp->next;
	}
	first = (*stack)->n;
	last = temp->n;
	a = first;
	first = last;
	last = a;
	sec = (*stack)->next->n;
	b = first;
	first = sec;
	sec = b;
}
