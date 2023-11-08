#include"shell.h"

/**
 * get_line - Reads a line of text from input.
 *
 * Return: input of buf.
 */
char *get_line(void)
{
	char *buf = NULL;
	size_t len_buf = 0;
	if (isatty(0) == 1)
		write(1, "$ ", 2);
	if (getline(&buf, &len_buf, stdin) == -1)
	{
		free(buf);
		return (NULL);
	}
	return (buf);
}
