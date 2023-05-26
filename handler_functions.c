#include "monty.h"

void (*op_functions(char *str))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"pall", pallOP},
		{"push", pushOP},
		{"pint", pintOP},
		{"pop", popOP},
		{"swap", swapOP},
		{"add", addOP},
		{"nop", nopOP},
		{"#", nopOP},
		{NULL, NULL}
	};

	int i = 0;

	while (instructions[i].opcode)
	{
		if (strcmp(instructions[i].opcode, str) == 0)
			return (instructions[i].f);
		i++;
	}
	return (opcodeErr);
}
