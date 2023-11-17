#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include "monty.h"

/**
 * main - monty program
 * @argc: num of arguments
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char **argv)
{

	stack_t *stack;

	stack = NULL;
	if (argc != 2)
	{
		_argcError();
	}

	run(&stack, argv[1]);

	_free_stack(&stack);
	return (0);
}
