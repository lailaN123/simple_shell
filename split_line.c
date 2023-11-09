#include "shell.h"

/**
 * split_line - Tokenizes a string into an array of strings.
 * @line: The string to tokenize.
 *
 * Return: An array of strings (tokens) or NULL if allocation fails.
 */
char **split_line(char *line)
{
	int i = 0;
	char *token = NULL;
	char **tokens = NULL;

	if (line == NULL)
	{
		return (NULL);
	}

	token = strtok(line, " \t\n");
	if (token == NULL)
	{
		free(line); 
			line = NULL;
		return (NULL);
	}

	while(token != NULL)
	{
		i++;
		tokens = malloc(sizeof(char *) * i);

		if (tokens == NULL)
		{
			free(line);
			line = NULL;
			return (NULL);
		}

		tokens[i - 1] = _strdup(token);
		token = strtok(NULL, " \t\n");
	}
	tokens[i] = NULL;
	free(line), line = NULL;
	return (tokens);
}
