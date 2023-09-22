#include "monty.h"

/**
 * sol_addnode_doubly - add node to doubly linked list
 * @head: node head
 * @data: data to add
 */
void sol_addnode_doubly(stack_t **head, int data)
{
	stack_t *new_node, *current;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->next = NULL;
		new_node->prev = current;
	}
}




#include <stdbool.h>

/**
 * is_integer - checks if a string is an integer
 * @str: the string to check
 * Return: true if str is an integer, false otherwise
 */
bool is_integer(const char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (false);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue;
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}





/**
 * sol_push - push a new node to the front of the stack
 * @head: pointer to the head of the stack
 * @count: current line number
 */
void sol_push(stack_t **head, unsigned int count)
{
	int num;
	stack_t *new_node;

	if (sol.arg == NULL || !is_integer(sol.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	num = atoi(sol.arg);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(sol.file);
		free(sol.contt);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
}


