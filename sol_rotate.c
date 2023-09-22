#include "monty.h"
/**
  *sol_rotate- rotates stack nodes from the top
  *@head: node head
  *@count: number of node
 */
void sol_rotate(stack_t **head, unsigned int count)
{
	stack_t *tmp1 = *head, *tmp2;
	(void)count;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tmp2 = (*head)->next;
	tmp2->prev = NULL;
	while (tmp1->next != NULL)
	{
		tmp1 = tmp1->next;
	}
	tmp1->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp1;
	(*head) = tmp2;
}

