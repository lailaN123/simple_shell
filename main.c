#include "shell.h"

/**
 * main - Simple shell program.
 * @ac: The number of arguments 
 * @av: An array of argument
 *
 * Return: 0 Always (success).
 */
int main(int ac, char **av)
{
	char *str = NULL;
	char **arrays = NULL;
	int stat = 0, i;
	(void) ac;
	(void)av;

	while(1)
	{
		str = get_line();
		if (str == NULL)
		{
			if (isatty(0) == 1)
				write(1, "\n", 1);
			return (stat);
		}
		
		arrays = split_line(str);
		if (arrays == NULL)
			continue;
		for(i = 0; arrays[i]; i++)
			printf("%s\n",arrays[i]); 
		/*stat = _exec(arrays, av);*/
	}
}
