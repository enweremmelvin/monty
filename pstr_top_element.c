#include "monty.h"

/**
 * pchar_top_element - print the ascii character of
 *                     all elements in the stack that are in the ascii table
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void pstr_top_elements(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	while (temp != NULL)
	{
		if (temp->n == 0)
			break;
		else if ((temp->n >= 1) && (temp->n <= 127))
			printf("%c", temp->n);
		else
			break;

		temp = temp->prev;
	}

	printf("\n");
}
