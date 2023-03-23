#include <stdio.h>
#include "monty.h"

/**
 * print_from_stack - print all n values in stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

void print_from_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_;

	(void) stack;
	(void) line_number;

	temp_ = temp;

	while (temp_ != NULL)
	{
		printf("%d\n", temp_->n);
		temp_ = temp_->prev;
	}
}
