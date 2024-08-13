#include "shell.h"

/**
 * main - test my shell
 * Return: 0
 */
int main(void)
{
	char *input_line;
	char **args;
	int status;

	do {
		prompt_and_read_input(&input_line);
		args = parse_command(input_line);
		status = execute_command(args);
		free(input_line);
		free(args);
	}

	while (status);
	return (0);
}

