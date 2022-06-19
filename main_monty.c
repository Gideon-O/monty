#include "monty.h"

/**
 * main - entry to program
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	FILE *file_read;
	int exit_status = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error(1));

	file_read = fopen(argv[1], "r");
	if (file_read == NULL)
		return (open_error(argv[1]));

	exit_status = monty_run(file_read);

	fclose(file_read);

	return (exit_status);
		open_error(argv[1]);
	monty_run(file_read);

	exit(EXIT_SUCCESS);
	return (0);
}
