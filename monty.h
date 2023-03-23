#ifndef __MONTY__
#define __MONTY__

/*--------------------------------------------*/
/*         DEFINED EXTERNAL VARIABLES         */
/*--------------------------------------------*/

extern int arg_count;
extern char command[];
extern int command_operand;


/*--------------------------------------------*/
/*     INCLUDE NEEDED STANDARD LIBRARIES      */
/*--------------------------------------------*/

#define _POSIX_C_SOURCE 200809L
#define MAX_LINE_CHAR 1000 /* max characters per file line */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


/*--------------------------------------------*/
/*  DATA STRUCTURES FOR PROJECT (STRUCTURES)  */
/*--------------------------------------------*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*--------------------------------------------*/
/*DEFINED EXTERNAL VARIABLES (TYPE: STRUCTURE)*/
/*--------------------------------------------*/

extern stack_t *stack;
extern stack_t *temp;



/*--------------------------------------------*/
/*            FUNCTION PROTOTYPES             */
/*--------------------------------------------*/

char *trim(char *text);
int parse_file(char *file_name);
int run_op_code(int line_number);
int set_args(char *line_content);

void free_stack(void);
void push_to_stack(stack_t **stack, unsigned int line_number);
void pop_from_stack(stack_t **stack, unsigned int line_number);
void print_stack_top(stack_t **stack, unsigned int line_number);
void print_from_stack(stack_t **stack, unsigned int line_number);
void swap_top_elements(stack_t **stack, unsigned int line_number);

#endif
