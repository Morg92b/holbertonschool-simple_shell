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
	char *command_path;

	if (strcmp(args[0], "exit") == 0)
		return (dash_exit());
	if (strcmp(args[0], "env") == 0)
		return (env_environ());
	command_path = find_executable_path(args[0]);
	if (command_path == NULL)
	{
		fprintf(stderr, "%s: not found\n", args[0]);
		return (1);
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(command_path, args, environ) < 0)
		{
			perror("Execution Error");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
		perror("Fork Error");
	else
		waitpid(pid, &status, WUNTRACED);
	free(command_path);
	return (1);
}
