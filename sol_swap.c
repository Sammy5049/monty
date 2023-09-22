#include "monty.h"
/**
 * sol_swap - swaps value of two nodes
 * @head: node head
 * @count: node number
*/
void sol_swap(stack_t **head, unsigned int count)
{
	stack_t *sol_h;
	int sz = 0, tmp;

	sol_h = *head;
	while (sol_h != NULL)
	{
		sol_h = sol_h->next;
		sz++;
	}
	if (sz < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sol_h = *head;
	tmp = sol_h->n;
	sol_h->n = sol_h->next->n;
	sol_h->next->n = tmp;
}

