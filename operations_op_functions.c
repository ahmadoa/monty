#include "monty.h"

/**
 * divOP - divides two top elements of the stack
 * @h: pointer to head of linked list
 * @numL: line number getting interpreted
 * Return: void
 */
void divOP(stack_t **h, unsigned int numL)
{
	int uno, dos;

	if (!h || !*h || !(*h)->next)
		divErr(h, numL);
	if ((*h)->n == 0)
		zeroErr(h, numL);
	uno = (*h)->n;
	dos = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = dos / uno;
}

/**
 * modOP - modules the two top elements of stack
 * @h: pointer ot head of linked list
 * @numL: line number interpreted
 * Return: void
 */
void modOP(stack_t **h, unsigned int numL)
{
	int uno, dos;

	if (!h || !*h || !(*h)->next)
		modErr(h, numL);
	if ((*h)->n == 0)
		zeroErr(h, numL);
	uno = (*h)->n;
	dos = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = dos % uno;
}

/**
 * mulOP - multiplies the two top elements of the stack
 * @h: pointer to head of linked list
 * @numL: number of line being interpreted
 * Return: void
 */
void mulOP(stack_t **h, unsigned int numL)
{
	int uno, dos;

	if (!h || !*h || !(*h)->next)
		mulErr(h, numL);
	uno = (*h)->n;
	dos = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = uno * dos;
}

/**
 * subOP - substracts two top elements from stack
 * @h: pointer to head of linked list
 * @numL: number of line getting interepreted
 * Return: void
 */
void subOP(stack_t **h, unsigned int numL)
{
	int uno, dos;

	if (!h || !*h || !(*h)->next)
		subErr(h, numL);
	uno = (*h)->n;
	dos = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = dos - uno;
}
