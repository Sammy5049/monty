#include "monty.h"
/**
  *sol_rotateb- rotates stack node to the bottom
  *@head: node head
  *@count: node number
 */
void sol_rotateb(stack_t **head, unsigned int count)
{
	stack_t *dup;
	(void)count;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;

}

