#include "shell.h"

/**
 * env_environ - Prints the current environment
 * Return: 1 to continue the shell
 */

int env_environ(void)
{
	char **env = environ;

	while (*env)
	{
		if (printf("%s\n", *env) < 0)
		{
			perror("printf");
			return (1);
		}
		env++;
	}
	return (1);
}
