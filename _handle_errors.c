#include "monty.h"

/**
 * _find_opcode - .
 * @opcode: .
 * @operators_code: ........
 * Return: .
 */
int _find_opcode(char *opcode, instruction_t operators_code[])
{
	int i;

	for (i = 0; i < 14; i++)
	{
		if (strcmp(opcode, operators_code[i].opcode) == 0)
			return (i);
	}
	return (-1);
}

/**
 * _free_stack - .
 * @stack: .
 * Return: .
 */
void _free_stack(stack_t **stack)
{

	if (*stack)
	{
		while ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
			free((*stack)->prev);
		}
		free(*stack);
	}
}

/**
 * _argcError - .
 * Return: .
 */
void _argcError(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * _fileError - .
 * @file: .
 * Return: .
 */
void _fileError(const char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 * _instructError - .
 * @line_copy: .
 * @count: .
 * Return: .
 */
void _instructError(int count, char *line_copy)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", count, line_copy);
	fclose(y.file);
	exit(EXIT_FAILURE);
}
