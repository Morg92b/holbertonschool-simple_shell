#include "shell.h"

/**
 * find_executable_path - search exec in path
 * @command: that command to search
 * Return: the exec if it's work or return NULL
 */
char *find_executable_path(char *command)
{
	char *path = getenv("PATH"), *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":"), *full_path = malloc(PATH_MAX);

	if (!full_path)
	{
		perror("malloc");
		free(path_copy);
		return (NULL);
	}
	if (strchr(command, '/'))
	{
		if (access(command, X_OK) == 0)
		{
			free(path_copy);
			return (strdup(command));
		}
		free(path_copy);
		free(full_path);
		return (NULL);
	}
	while (dir)
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