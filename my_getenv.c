#include <stdio.h>

extern char **environ;

int my_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++) {
		if (s1[i] != s2[i]) {

			return (unsigned char)s1[i] - (unsigned char)s2[i];
		}

		if (s1[i] == '\0') {

			return (0);
		}

	}

	return (0);
}

size_t my_strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

char *_getenv(const char *name)
{
	char **env = environ;

	size_t name_len = my_strlen(name);

	while (*env)
	{
		if (my_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (*env + name_len + 1);
		}

		env++;

	}

	return (NULL);
}
