#include "monty.h"
/**
 * sol_div - divide first two elements in the stack.
 * @head: node head
 * @count: number of node
*/
void sol_div(stack_t **head, unsigned int count)
{
	stack_t *sol_h;
	int sz = 0, tmp;

	sol_h = *head;
	while (sol_h)
	{
		sol_h = sol_h->next;
		sz++;
	}
	if (sz < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sol_h = *head;
	if (sol_h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = sol_h->next->n / sol_h->n;
	sol_h->next->n = tmp;
	*head = sol_h->next;
	free(sol_h);
}

