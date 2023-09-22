#include "monty.h"
/**
 * sol_execute - funct to execute given opcode
 * @stack: head of stack linked-list
 * @count: num of line
 * @file: pointer to the monty file
 * @contt: details in line
 * Return: 1 on fail
 */
int sol_execute(char *contt, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t str_opr[] = {
		{"push", sol_push}, {"pall", sol_pall}, {"pint", sol_pint},
		{"pop", sol_pop}, {"swap", sol_swap}, {"add", sol_add_ele},
		{"nop", sol_noth}, {"sub", sol_subst}, {"div", sol_div},
		{"mul", sol_mul}, {"mod", sol_mod}, {"pchar", sol_pchar},
		{"pstr", sol_pstr}, {"rotl", sol_rotate}, {"rotr", sol_rotateb},
		{"queue", sol_queue}, {"stack", sol_stack}, {NULL, NULL}};

	size_t idx = 0;
	char *opp_str;

	opp_str = strtok(contt, " \n\t");
	if (opp_str && opp_str[0] == '#')
		return (0);
	sol.arg = strtok(NULL, " \n\t");
	while (str_opr[idx].opcode && opp_str)
	{
		if (strcmp(opp_str, str_opr[idx].opcode) == 0)
		{
			str_opr[idx].f(stack, count);
			return (0);
		}
		idx++;
	}
	if (opp_str && str_opr[idx].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, opp_str);
		fclose(file);
		free(contt);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}

