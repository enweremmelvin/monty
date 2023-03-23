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

	if (temp == NULL)
		printf("\n");

	while (temp != NULL)
	{
		if ((temp->n >= 0) && (temp->n <= 127))
		{
			if (temp->n == 0)
			{
				printf("\n");
				break;
			}

			printf("%c", temp->n);
		}
		else
		{
			printf("\n");
			break;
		}

		if (temp->prev == NULL)
			printf("\n");
		temp = temp->prev;
	}
}
