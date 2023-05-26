#include "monty.h"

/**
 * freeStack - frees a stack
 * @stack: pointer to head node of a linked list
 * Return: void
 */
void freeStack(stack_t *stack)
{
	stack_t *plate;

	plate = stack;
	while (stack)
	{
		plate = stack->next;
		free(stack);
		stack = plate;
	}
}
