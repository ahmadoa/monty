#include "monty.h"

/**
 * useErr - error usage
 */

void useErr(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * fileErr - file error
 */

void fileErr(void)
{
	fprintf(stderr, "Error: Can't open file %s \n", valStack.file);
	exit(EXIT_FAILURE);
}

/**
 * mallocErr - malloc space error
 * @stack: stack
 */
void mallocErr(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	freeStack(*stack);
	exit(EXIT_FAILURE);
}


/**
 * opcodeErr - error in opcode
 * @stack: pointer to head of linked list
 * @numL: number line
 * Return: void
 */
void opcodeErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", numL, valStack.code);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
