#include "shell.h"

/**
 * dash_exit - for the exit command to exit the shell
 * Return: 0 for tell the main program to exit the main loop
 */
int dash_exit(void)
{
	return (0);
}
/**
 * execute_command - Execute a user-entered command
 * @args: array of string representing the command and its arguments
 * Return: 1 to continue the shell, 0 to indicate exit.
 */
int execute_command(char **args)
{
	pid_t pid;
	int status;

	if (strcmp(args[0], "exit") == 0)
	{
		return (dash_exit());
	}
	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) < 0)
		{
			perror("Execution Error");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Fork Error");
	}
	else
	{
		waitpid(pid, &status, WUNTRACED);
	}
	if (args[0] == NULL)
	{
		return (1);
	}

	return (1);
}
