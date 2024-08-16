#include "shell.h"

/**
 * main - Entry of our Shell
 * Return: 0
 */

int	main(void)
{
	char	*buffer = NULL;
	size_t	buffer_size = 0;

	while (1)
	{
		prompt();
		if (getline(&buffer, &buffer_size, stdin) == -1)
		{
			printf("\n");
			break;
		}
		remove_newline(buffer);
		execute_command(buffer);
	}
	free(buffer);
	return (0);
}
