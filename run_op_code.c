#include "monty.h"

/**
 * run_op_code - run the given opcode
 *
 * @line_number: number of line in file
 *
 * Return: 0
 */

stack_t *stack;

int run_op_code(int line_number)
{
	int i;
	instruction_t opcode_list[] = {
		{"push", push_to_stack},
		{"pall", print_from_stack},
		{NULL, NULL}
	};

	i = 0;

	while (opcode_list[i].opcode != NULL)
	{
		if (strcmp(command, opcode_list[i].opcode) == 0)
			opcode_list[i].f(&stack, line_number);

		i++;
	}

	return (0);
}