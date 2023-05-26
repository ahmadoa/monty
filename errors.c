#include "monty.h"

void useErr()
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void fileErr()
{
	fprintf(stderr, "Error: Can't open file %s \n", valStack.file);
	exit(EXIT_FAILURE);
}


void opcodeErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", numL, valStack.code);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
