#include "monty.h"

/**
 * pchar_top_elements - print the ascii character of
 *                     the top element in the stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void pchar_top_elements(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (temp != NULL)
	{
		if ((temp->n >= 0) && (temp->n <= 127))
			printf("%c\n", temp->n);
		else
		{
			dprintf(STDERR_FILENO, "L%d: can't pchar, %s\n",
				line_number, "value out of range");
			free_stack();
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n",
			line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
