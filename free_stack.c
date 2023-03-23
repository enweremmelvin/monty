#include "monty.h"

/**
 * free_stack - free the stack
 */

void free_stack(void)
{
	stack_t *temp_;

	while (stack)
	{
		temp_ = stack;
		stack = stack->next;

		free(temp_);
	}
}
