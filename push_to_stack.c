#include "monty.h"

/**
 * push_to_stack - push new value to stack
 *
 * @stack: memory address of the stack
 * @line_number: number of line being read from file
 */

stack_t *temp;

void push_to_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *stack_add;

	if (arg_count != 2)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	stack_add = malloc(sizeof(stack_t));
	if (stack_add == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack_add->n = command_operand;

	if (*stack == NULL)
	{
		stack_add->next = NULL;
		stack_add->prev = NULL;
		*stack = temp = stack_add;
	}
	else
	{
		stack_add->next = NULL;
		stack_add->prev = temp;
		temp->next = stack_add;
		temp = stack_add;
	}
}
