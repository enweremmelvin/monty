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
	int i, check_run_success;
	instruction_t opcode_list[] = {
		{"nop", do_nothing},
		{"push", push_to_stack},
		{"pop", pop_from_stack},
		{"pint", print_stack_top},
		{"add", add_top_elements},
		{"sub", sub_top_elements},
		{"div", div_top_elements},
		{"mul", mul_top_elements},
		{"mod", mod_top_elements},
		{"pall", print_from_stack},
		{"swap", swap_top_elements},
		{NULL, NULL}
	};

	i = check_run_success = 0;

	while (opcode_list[i].opcode != NULL)
	{
		if (strcmp(command, opcode_list[i].opcode) == 0)
		{
			opcode_list[i].f(&stack, line_number);
			check_run_success += 1;
		}

		i++;
	}

	if (check_run_success == 0)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n",
			line_number, command);
		free_stack();
		exit(EXIT_FAILURE);
	}

	return (0);
}
