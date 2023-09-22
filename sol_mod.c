#include "monty.h"
/**
 * sol_mod - divide the node 1 by node 2
 * @head: noe head
 * @count: node num
*/
void sol_mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
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
	tmp = sol_h->next->n % sol_h->n;
	sol_h->next->n = tmp;
	*head = sol_h->next;
	free(sol_h);
}

