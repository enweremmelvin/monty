#include "monty.h"

/**
 * add_top_elements - swap the top 2 elements of the stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void add_top_elements(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_;

	(void) stack;

	if (temp != NULL && temp->prev != NULL)
	{
		temp->prev->n += temp->n;
		temp->prev->next = NULL;
		temp_ = temp->prev;
		free(temp);
		temp = temp_;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
