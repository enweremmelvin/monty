#include "monty.h"

/**
 * pstr_top_elements - print the ascii character of
 *                     all elements in the stack that are in the ascii table
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void pstr_top_elements(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_;

	(void) stack;
	(void) line_number;

	temp_ = temp;

	while (temp_ != NULL)
	{
		if (temp_->n == 0)
			break;

		if ((temp_->n >= 1) && (temp_->n <= 127))
			printf("%c", temp_->n);
		else
			break;

		temp_ = temp_->prev;
	}

	printf("\n");
}
