#include "monty.h"

/**
 * parse_file - parse the contents of a file and
 *              perform operations based on opcodes in file
 *              call functions to handle different opcodes per line in file
 *
 * @file_name: name of of file to get op code from
 *
 * Return: 0
 */

int parse_file(char *file_name)
{
	FILE *file_content;
	unsigned int line_num = 0;
	char line_content[MAX_LINE_CHAR];

	file_content = fopen(file_name, "r");

	if (file_content == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n",
			file_name);
		free_stack();
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		fgets(line_content, 999, file_content);
		line_num += 1;

		if (feof(file_content))
			break;

		strcpy(line_content, trim(line_content));
		set_args(line_content);
		run_op_code(line_num);
	}

	fclose(file_content);

	return (0);
}
