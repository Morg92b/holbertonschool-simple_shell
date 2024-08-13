#include "shell.h"

/**
 * find_executable_path - search exec in path
 * @command: that command to search
 * Return: the exec if it's work or return NULL
 */
char *find_executable_path(char *command)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":");
	char *full_path = malloc(PATH_MAX);

	if (!full_path)
	{
		perror("Alllocation error");
		free(path_copy);
		return (NULL);
	}

	while (dir != NULL)
	{
		strcpy(full_path, dir);
		strcat(full_path, "/");
		strcat(full_path, command);

		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (full_path);
		}

		dir = strtok(NULL, ":");
	}
	free(full_path);
	free(path_copy);
	return (NULL);
}
