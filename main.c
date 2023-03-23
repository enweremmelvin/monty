#include "monty.h"

/**
 * main - entry point for program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success; 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	parse_file(argv[1]);

	return (0);
}
