#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

mt_t sol = {NULL, NULL, NULL, 0};
/**
 * main - interpreter for the monty code base
 * @argc: argument num
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *contt = NULL;
	size_t bufsize = BUFSIZ;
	FILE *file;
	stack_t *stack = NULL;
	size_t count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	sol.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		contt = (char *)malloc(bufsize * sizeof(char));
		if (contt == NULL)
		{
			fprintf(stderr, "Error: Memory allocation failed\n");
			exit(EXIT_FAILURE);
		}

		if (fgets(contt, bufsize, file) == NULL)
		{
			free(contt);
			break;
		}
		count++;
		sol.contt = contt;
		sol_execute(contt, &stack, count, file);
		free(contt);
	}
	fclose(file);
	free_stack(stack);
	return (0);
}

