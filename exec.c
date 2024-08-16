#include "shell.h"

/**
 * execute_command - Executes commands enter by User.
 * @buffer: The input buffer containing the command.
 */

void	execute_command(char *buffer)
{
	char	*args[2];
	int	status;
	pid_t	pid;

	args[0] = buffer;
	args[1] = NULL;
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
			perror("./shell");
		exit(EXIT_FAILURE);
	}
	else
		wait(&status);
}
