#include "monty.h"
/**
* free_stack - free the node
* @header: stack head
*/
void free_stack(stack_t *header)
{
	stack_t *tmp;

	tmp = header;
	while (header != NULL)
	{
		tmp = header->next;
		free(header);
		header = tmp;
	}
}

