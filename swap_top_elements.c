#include "monty.h"

/**
 * swap_top_elements - swap the top 2 elements of the stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void swap_top_elements(stack_t **stack, unsigned int line_number)
{
	int prev_elem;

	(void) stack;

	if (temp != NULL && temp->prev != NULL)
	{
		prev_elem = temp->prev->n;
		temp->prev->n = temp->n;
		temp->n = prev_elem;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
