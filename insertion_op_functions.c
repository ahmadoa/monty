#include "monty.h"

/**
 * addOP - adds two top elements from stack
 * @h: pointer to head of linked list
 * @numL: number of line being interpreted
 * Return: void
 */
void addOP(stack_t **h, unsigned int numL)
{
	int uno, dos;

	if (!h || !*h || !(*h)->next)
		addErr(h, numL);
	uno = (*h)->n;
	dos = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = uno + dos;
}

/**
 * pushOP - pushs new element to stack
 * @h: pointer to head of stack
 * @numL: line number
 * Return: void
 */
void pushOP(stack_t **h, unsigned int numL)
{
	stack_t *node = NULL, *tail = NULL;
	size_t i = 0;

	if (!h || !numL)
		exit(EXIT_FAILURE);
	if (valStack.n[i] == '\0')
		pushErr(h, numL);
	node = malloc(sizeof(stack_t));
	if (!node)
		mallocErr(h);
	while (valStack.n[i] != '\0')
	{
		if (isdigit(valStack.n[i]) == 0 && valStack.n[i] != '-')
			pushErr(h, numL);
		i++;
	}
	node->n = atoi(valStack.n);
	if (valStack.mode == 1)
	{
		node->next = NULL;
		if (!*h)
		{
			node->prev = NULL;
			*h = node;
		}
		else
		{
			tail = *h;
			while (tail->next)
				tail = tail->next;
			node->prev = tail;
			tail->next = node;
		}
	}
	else
	{
		node->prev = NULL;
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
	}
}
