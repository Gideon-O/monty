#include "monty.h"

/**
 * usage_error - function to print usage error message
 * @flag: Type of error: mallod failed, failed, usage
 *
 * Return: EXIT_FAILURE
 */

int usage_error(int flag)
{
	char *errors[2] = {"Error: malloc failed", "USAGE: monty file"};

	fprintf(stderr, "%s\n", errors[flag]);

	return (EXIT_FAILURE);
}

/**
 * open_error - function to print error on failuer to open file
 * @filename: name of the file to be opened
 * Return: EXIT_FAILURE
 */

int open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * f_errors - Function to print the errors
 * @flag: The index to the type of error
 * @line_num: The line in file with error
 *
 * Return: EXIT_FAILURE
 */
int f_errors(int flag, unsigned int line_num)
{
	char *errors[] = {"usage: push integer", "can\'t pint, stack empty",
		"can\'t pop an empty stack", "can\'t swap, stack too short",
		"can\'t add, stack too short", "can\'t sub, stack too short",
		"can\'t div, stack too short", "division by zero",
		"can\'t mul, stack too short", "can\'t mod, stack too short",
		"can\'t pchar, value out of range", "can\'t pchar, stack empty"};
	fprintf(stderr, "L%d: %s\n", line_num, errors[flag]);
	return (EXIT_FAILURE);
}
