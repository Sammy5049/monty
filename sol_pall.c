#include "monty.h"

/**
 * sol_pall - print all nodes
 * @head: node head
 * @count: void
 */
void sol_pall(stack_t **head, unsigned int count)
{
	stack_t *sol_h;
	(void)count;

	sol_h = *head;
	if (sol_h == NULL)
		return;

	while (sol_h != NULL)
	{
		printf("%d\n", sol_h->n);
		sol_h = sol_h->next;
	}
}

