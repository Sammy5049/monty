#include "monty.h"
/**
 * sol_queue - print top node
 * @head: queue head
 * @count: number of node
 */
void sol_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	sol.filo = 1;
}

/**
 * sol_addqueue - add node to stack tail
 * @data: value
 * @head: stack head
 */
void sol_addqueue(stack_t **head, int data)
{
	stack_t *add_node, *tmp;

	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	add_node->n = data;
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		add_node->prev = NULL;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = add_node;
		add_node->prev = tmp;
	}
}

