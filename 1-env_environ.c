#include <stdio.h>

/**
 * main - un programme qui imprime l'adresse d'env et fonction
 * principale d'environ
 * @argv: pointeur des arguments
 * @env: pointeur d'environ
 * Return: 0
 */

extern char **environ;

int main(int argc, char *argv[], char *env[])
{
	printf("Adresse de env : %p\n", (void *)env);

	printf("Adresse de environ : %p\n", (void *)environ);

	if (env == environ)
	{
		printf("Les adresses sont identiques. \n");
	}

	else
	{
		printf("Les adresses sont différentes. \n");
	}

	return (0);
}
