#include "monty.h"

/**
 * set_args - break up the words in line_content
 *            and set extern variables command and val
 *
 * @line_content: values in the specific line of the file
 *
 * Return: 0
 */

int arg_count;
char command[10];
int command_operand;

int set_args(char *line_content)
{
	int i, j;
	int w_space;
	char temp[10];


	i = j = w_space = arg_count = 0;

	for (; command[i]; i++)
		command[i] = '\0';
	i = 0;

	while (line_content[i] != '\0' && line_content[i] != '\n')
	{
		if (w_space > 1)
			break;
		if (line_content[i] != 32 && w_space == 0)
		{
			command[j] = line_content[i];
			j++;
		}
		if (line_content[i] == 32)
		{
			j = 0;
			w_space += 1;
		}
		if (line_content[i] != 32 && w_space == 1)
		{
			temp[j] = line_content[i];
			j++;
		}

		i++;
	}

	arg_count = w_space + 1;
	command_operand = atoi(temp);
	return (0);
}
