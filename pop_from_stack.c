#include "monty.h"

/**
 * pop_from_stack - delete the top value in a stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void pop_from_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_;

	(void) stack;

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}

	if (temp != NULL)
	{
		temp_ = temp->prev;
		if (temp_)
			temp_->next = NULL;
		free(temp);
		temp = temp_;
	}
}
