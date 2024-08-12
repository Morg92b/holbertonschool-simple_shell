#include <stdio.h>

/**
 * main - un programme qui imprime l'environnement
 * en utilisant la variable globale environ
 * Return: 0
 */

extern char **environ;

int main(void)
{
	char **env = environ;

	while (*env)
	{
		printf("%s\n", env);
		env++;
	}

	return (0);
}
