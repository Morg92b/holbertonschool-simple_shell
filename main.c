#include "shell.h"

/**
 * main - test my shell
 * Return: 0
 */
int main(void)
{
	char *input_line;
	char **args;
	int status = 1;

	while (status)
	{
		prompt_and_read_input(&input_line);

		args = parse_command(input_line);

		if (args[0] == NULL)
		{
			free(input_line);
			free(args);
			continue;
		}

		status = execute_command(args);

		free(input_line);
		free(args);
	}

	return (0);
}
