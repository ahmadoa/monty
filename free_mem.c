#include "monty.h"

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
