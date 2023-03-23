#include "monty.h"

/**
 * check_comment - check if line in file is commented
 * NOTE: comments start with: #
 *
 * @line_content: content of the current file line
 *
 * Return: 0 if line is commented, 1 otherwise
 */

int check_comment(char *line_content)
{
	if (line_content)
	{
		if (line_content[0] == '#')
			return (0);
	}

	return (1);
}
