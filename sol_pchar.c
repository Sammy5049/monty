#include "monty.h"
/**
 * sol_pchar - print the top char in the stack
 * @head: node head
 * @count: node number
*/
void sol_pchar(stack_t **head, unsigned int count)
{
	stack_t *sol_h;

	sol_h = *head;
	if (sol_h == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (sol_h->n > 127 || sol_h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", sol_h->n);
}

