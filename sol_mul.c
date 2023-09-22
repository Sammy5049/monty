#include "monty.h"
/**
 * sol_mul - multiply top two nodes
 * @head: node head
 * @count: number of node
*/
void sol_mul(stack_t **head, unsigned int count)
{
	stack_t *sol_h;
	int ct = 0, tmp;

	sol_h = *head;
	while (sol_h != NULL)
	{
		sol_h = sol_h->next;
		ct++;
	}
	if (ct < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sol_h = *head;
	tmp = sol_h->next->n * sol_h->n;
	sol_h->next->n = tmp;
	*head = sol_h->next;
	free(sol_h);
}

