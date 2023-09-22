#include "monty.h"
/**
 * sol_pop - remove top node
 * @head: node head
 * @count: number of node
*/
void sol_pop(stack_t **head, unsigned int count)
{
	stack_t *sol_h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sol_h = *head;
	*head = sol_h->next;
	free(sol_h);
}

