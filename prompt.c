#include "shell.h"

/**
 * prompt_and_read_input - Show a prompt and read user input
 * @input_line: double pointer to the string user input will be stored
 */
void prompt_and_read_input(char **input_line)
{
	char *prompt = "(:D) ";

	if (isatty(STDIN_FILENO))
	{
		if (write(STDOUT_FILENO, prompt, strlen(prompt)) == -1)
		{
			perror("write");
			exit(EXIT_FAILURE);
		}
	}
	*input_line = read_user_input();
}
