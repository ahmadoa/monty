#include "monty.h"

/**
 * divErr - error case of divOP
 * @stack: pointer to head in a doubly linked list
 * @numL: number of line where error happened
 * Return: void
 */
void divErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}


/**
 * mulErr - error case of mulOP
 * @stack: pointer to head in a doubly linked list
 * @numL: number of line where error happened
 * Return: void
 */
void mulErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * modErr - error case of modOP
 * @stack: pointer to head in a doubly linked list
 * @numL: line number where error happened
 * Return: void
 */
void modErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * zeroErr - error case for dividing by zero
 * @stack: pointer to head of a doubly linked list
 * @numL: number of line wherer error happened
 * Return: void
 */
void zeroErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: division by zero\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * pcharErr - error case for pcharOP
 * @stack: pointer to head of a doubly linked list
 * @numL: number of line where error happened
 * Return: void
 */
void pcharErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
