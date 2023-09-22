#include "monty.h"
/**
  *sol_subst- subst node 2 from node 1
  *@head: node head
  *@count: node number
 */
void sol_subst(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	int result, num;

	tmp = *head;
	for (num = 0; tmp != NULL; num++)
		tmp = tmp->next;
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	result = tmp->next->n - tmp->n;
	tmp->next->n = result;
	*head = tmp->next;
	free(tmp);
}

