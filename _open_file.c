#include "monty.h"
val_t y;
/**
 * run - rum profram
 * @stack: stack list
 * @filename: file name
 * Return: void
 */

void run(stack_t **stack, char *filename)
{
	char line[100];
	char *line_copy, *_opcode;
	int i, check;
	unsigned int count = 0;

	instruction_t operators_code[] = {{"push", _op_push},
																		{"pall", _pall},
																		{"pint", _op_pint},
																		{"pop", _op_pop},
																		{"swap", _op_swap},
																		{"add", _op_add},
																		{"nop", o_nop},
																		{"sub", _op_sub},
																		{"div", _op_div},
																		{"mul", _op_mul},
																		{"mod", _op_mod},
																		{"pchar", _op_pchar},
																		{"pstr", _pstr},
																		{"rotl", _rotl}};

	y.file = fopen(filename, "r");
	if (y.file == NULL)
		_fileError(filename);
	while (fgets(line, sizeof(line), y.file) != NULL)
	{
		count++;
		line_copy = strcat(line, "\0");
		_opcode = strtok(line_copy, " ,\n");
		if (_opcode == NULL || _opcode[0] == '#')
			continue;
		i = _find_opcode(_opcode, operators_code);
		if (i >= 0)
			operators_code[i].f(stack, count);
		else
			_instructError(count, _opcode);
	}
	check = fclose(y.file);
	if (check == -1)
		exit(-1);
}
