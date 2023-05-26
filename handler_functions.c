#include "monty.h"

/**
 * op_functions - function that search which function to use for opcode
 * @str: the opcode
 * Return: pointer to function
 */
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
		{"sub", subOP},
		{"div", divOP},
		{"mul", mulOP},
		{"mod", modOP},
		{"pchar", pcharOP},
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
