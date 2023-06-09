#include "monty.h"

/**
 * pallOP - prints all element of stack
 * @stack: head of linked list
 * @numL: line number where error occured
 * Return: void
 */
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

/**
 * pintOP - prints first element
 * @h: pointer to head of linked list
 * @numL: line numer wherer error occured
 * Return: void
 */
void pintOP(stack_t **h, unsigned int numL)
{
	if (!h || !*h)
		pintErr(h, numL);
	printf("%d\n", (*h)->n);
}
