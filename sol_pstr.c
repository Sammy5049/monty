#include "monty.h"
/**
 * sol_pstr - print strg from top of stack
 * @head: node head
 * @count: number of node
*/
void sol_pstr(stack_t **head, unsigned int count)
{
	stack_t *sol_h;
	(void)count;

	sol_h = *head;
	while (sol_h != NULL)
	{
		if (sol_h->n > 127 || sol_h->n <= 0)
		{
			break;
		}
		printf("%c", sol_h->n);
		sol_h = sol_h->next;
	}
	printf("\n");
}

