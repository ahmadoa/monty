#include "monty.h"

/**
 * swapOP - swaps vals of top two elements in the list
 * @h: pointer to head of linked list
 * @numL: line number wherer error happened
 * Return: void
 */

void swapOP(stack_t **h, unsigned int numL)
{
	int temp;

	if (!h || !*h || (*h)->next == NULL)
		swapErr(h, numL);
	temp = (*h)->n;
	(*h)->n = (*h)->next->n;
	(*h)->next->n = temp;
}
