#include "monty.h"

void pallOP(stack_t **stack, unsigned int numL)
{
	stack_t *node = NULL;

	if (!numL)
		return;
	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}

void pintOP(stack_t **h, unsigned int numL)
{
	if (!h || !*h)
		pintErr(h, numL);
	printf("%d\n", (*h)->n);
}
