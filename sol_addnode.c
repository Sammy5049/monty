#include "monty.h"
/**
 * sol_addnode - add node to a stack
 * @head: node head
 * @data: node value
*/
void sol_addnode(stack_t **head, int data)
{
    stack_t *new;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    
    new->n = data;
    new->next = *head;
    new->prev = NULL;
    
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    
    *head = new;
}

