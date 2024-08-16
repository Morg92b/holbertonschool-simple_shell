#include "shell.h"

/**
 * my_realloc - simple realloc implementation
 * @ptr: pointer to the memory allowed
 * @new_size: tail of new size
 * Return: new_ptr
 */
void *my_realloc(void *ptr, size_t new_size)
{
	void *new_ptr;
	size_t old_size;
	size_t copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	old_size = *(size_t *)((char *)ptr - sizeof(size_t));

	new_ptr = malloc(new_size + sizeof(size_t));

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;

	_memcpy((char *)new_ptr + sizeof(size_t), ptr, copy_size);

	*(size_t *)new_ptr = new_size;

	free((char *)ptr - sizeof(size_t));

	return ((char *)new_ptr + sizeof(size_t));
}

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: n bytes to copy
 * Return: dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
