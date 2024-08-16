#include "shell.h"

/**
 * read_user_input - read user input from standard input
 * Return: return a pointer to the string contain the user input
 */

char *read_user_input(void)
{
	char *input = NULL;
	size_t buffer_size = 0;
	ssize_t characters;

	characters = getline(&input, &buffer_size, stdin);

	if (characters == -1)
	{
		free(input);

		if (errno == EINTR)
			return (NULL);
		else if (errno == EINVAL || errno == ENOMEM)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
		else
			exit(EXIT_SUCCESS);
	}
	return (input);
}
