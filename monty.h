#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct tran_a - structure with args and contents
 * @arg: the data
 * @file: file pointer
 * @contt: contents in the line
 * @filo: flag to switch stack and queue
 */
typedef struct tran_a
{
	char *arg;
	FILE *file;
	char *contt;
	int filo;
}  mt_t;

extern mt_t sol;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



bool is_integer(const char *str);
void sol_add_ele(stack_t **head, unsigned int count);
void sol_addnode(stack_t **head, int data);
void sol_div(stack_t **head, unsigned int count);
int sol_execute(char *contt, stack_t **stack, unsigned int count, FILE *file);
void sol_mod(stack_t **head, unsigned int count);
void sol_mul(stack_t **head, unsigned int count);
void sol_pall(stack_t **head, unsigned int count);
void sol_pchar(stack_t **head, unsigned int count);
void sol_pint(stack_t **head, unsigned int count);
void sol_pop(stack_t **head, unsigned int count);
void sol_pstr(stack_t **head, unsigned int count);
void sol_push(stack_t **head, unsigned int count);
void sol_queue(stack_t **head, unsigned int count);
void sol_addqueue(stack_t **head, int data);
void sol_rotate(stack_t **head, unsigned int count);
void sol_rotateb(stack_t **head, unsigned int count);
void free_stack(stack_t *header);
void sol_stack(stack_t **head, unsigned int count);
void sol_subst(stack_t **head, unsigned int count);
void sol_swap(stack_t **head, unsigned int count);
void sol_noth(stack_t **head, unsigned int counter);



#endif

