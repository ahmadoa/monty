#include "monty.h"

void swapOP(stack_t **h, unsigned int numL)
{
	int temp;

	if (!h || !*h || (*h)->next == NULL)
		swapErr(h, numL);
	temp = (*h)->n;
	(*h)->n = (*h)->next->n;
	(*h)->next->n = temp;
}
