#include "monty.h"

/**
 * addErr - error case for addOP
 * @stack: pointer to head of a doubly linked list
 * @numL: line number where error happened
 * Return: void
 */
void addErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * pushErr - error case for pushOP
 * @stack: pointer to head of a doubly  linked list
 * @numL: line number where error happened
 * Return: void
 */
void pushErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: usage: push integer\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * pintErr - error case for printing int pintOP
 * @stack: pointer to head node of a doubly  linked list
 * @numL: line number where error happened
 * Return: void
 */
void pintErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * swapErr - error case for swapOP
 * @stack: pointer to head node of a linked list
 * @numL: line number where error happened
 * Return: void
 */
void swapErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}


/**
 * popErr - error case for popOP
 * @stack: pointer to head node of a linked list
 * @numL: line number where error occured
 * Return: void
 */
void popErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
