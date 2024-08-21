#include "shell.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string,
 * or NULL if memory allocation fails
 */

char *_strdup(char *str)
{
	size_t len, i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;
	new_str = (char *)malloc(len);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	return (new_str);
}

/**
 * _strncmp - Compare the firsts n characters of 2 strings.
 * @str1: First string.
 * @str2: Second string.
 * @n: number of character to compare.
 *
 * Return: An integer smaller, equal or superior to 0 if,
 * str1 is respectively inferior, equal or superior to str2.
 */

int _strncmp(char *str1, char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (str1[i] == '\0' || str2[i] == '\0')
			break;
	}
	return (0);
}

/**
 * *_getenv - Get the value of an environment variable.
 * @name: Name of the environment variable.
 *
 * Return: Pointer to the value of an environment variable,
 * or NULL if the variable doesn't exist.
 */

char *_getenv(char *name)
{
	size_t name_len;
	char **env;

	if (name == NULL)
		return (NULL);
	name_len = _strlen(name);
	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
			return (*env + name_len + 1);
	}
	return (NULL);
}
