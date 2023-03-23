#include "monty.h"

/**
 * div_top_elements - divide the top element from the second top element
 *                    and delete the top element
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void div_top_elements(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_;

	(void) stack;

	if (temp != NULL && temp->prev != NULL)
	{
		if (temp->n == 0)
		{
			dprintf(STDERR_FILENO, "L%d: division by zero\n",
				line_number);
			free_stack();
			exit(EXIT_FAILURE);
		}

		temp->prev->n /= temp->n;
		temp->prev->next = NULL;
		temp_ = temp->prev;
		free(temp);
		temp = temp_;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
