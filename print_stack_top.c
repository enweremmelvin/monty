#include "monty.h"

/**
 * print_stack_top - print the value at the top of the stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void print_stack_top(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (temp != NULL)
		printf("%d\n", temp->n);
	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
