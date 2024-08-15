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
		printf("%s\n", *env);
		env++;
	}
	return (1);
}
