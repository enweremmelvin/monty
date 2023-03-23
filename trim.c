#include "monty.h"

/**
 * trim - trim excess whitespace from text
 *
 * @text: text to be trimmed of whitespaces
 *
 * Return: trimmed text
 */

char *trim(char *text)
{
	int i, j;
	char trimmed[MAX_LINE_CHAR];
	char *ret_trimmed;

	i = j = 0;

	while (text[i] != EOF)
	{
		if ((text[i] == 32) && (j == 0))
		{
			i++;
			continue;
		}
		if ((text[i] != 32) ||
		    (text[i] == 32 && text[i + 1] != 32 && j != 0))
		{
			trimmed[j] = text[i];
			j++;
		}

		i++;
	}

	ret_trimmed = trimmed;
	return (ret_trimmed);
}
