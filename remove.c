#include "shell.h"

/**
 * remove_newline - Removes the newline from the input
 * @buffer: The input buffer.
 */

void	remove_newline(char *buffer)
{
	int	index;

	for (index = 0; buffer[index] != '\0'; index++)
	{
		if (buffer[index] == '\n')
		{
			buffer[index] = '\0';
			break;
		}
	}
}
