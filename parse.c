#include "shell.h"

/**
 * parse_command - Parse the order line into tokens
 * @input_line: the line command to check
 * Return: a array of character string representing the command tokens
 */

char **parse_command(char *input_line)
{
	int buffsize = 64, position = 0;
	char **tokens = malloc(buffsize * sizeof(char *));
	char *token, **token_temp;

	if (!tokens)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	token = strtok(input_line, " \t\r\n\a");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= buffsize)
		{
			buffsize *= 4;
			token_temp = realloc(tokens, buffsize * sizeof(char *));
			if (!token_temp)
			{
				free(tokens);
				perror("realloc");
        exit(EXIT_FAILURE);
			}
			tokens = token_temp;
		}
		token = strtok(NULL, " \t\r\n\a");
	}
	tokens[position] = NULL;
	return (tokens);
}