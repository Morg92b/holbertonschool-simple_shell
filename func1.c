#include "shell.h"

/**
 * *_strcpy - copies string to dest
 * @dest: copied string
 * @src: string to copy
 * Return: dest
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *_strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: 0 or pointer to first occurrence of c
 */

char	*_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length
 */

int	_strlen(char *s)
{
	int	length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * _strcmp - compare 2 strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: *s1 - *s2 or 0
 */

int	_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
