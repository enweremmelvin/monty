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

	if (temp != NULL)
	{
		if (temp->prev != NULL)
		{
			temp_ = temp->prev;
			temp_->next = NULL;
			free(temp);
			temp = temp_;
		}
		else
		{
			free(temp);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
