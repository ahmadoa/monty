#include "monty.h"

void popOP(stack_t **h, unsigned int numL)
{
	stack_t *node;

	if (!h || !*h)
		popErr(h, numL);
	node = *h;
	if (node->next == NULL)
	{
		free(*h);
		*h = NULL;
	}
	else
	{
		(*h) = (*h)->next;
		(*h)->prev = NULL;
		free(node);
	}
}
