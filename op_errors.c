#include "monty.h"


void addErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

void pushErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: usage: push integer\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

void pintErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

void swapErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

void popErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
