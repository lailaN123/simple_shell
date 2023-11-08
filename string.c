#include "shell.h"

/**
 * _strlen - returns the length of a string.
 *@s: strinng to check.
 * Return: returns the length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a string
 */
int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0')
{
	while (*s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}
}
return (0);
}

/**
 * *_strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count1 = 0;
	int count2 = 0;
	int count3;
	char *orig1 = src;
	char *orig2 = dest;

	while (*dest != '\0')
	{
		dest++;
		count2++;
	}

	while (*src != '\0')
	{
		src++;
		count1++;
	}
	count3 = count1 + count2;
	src = orig1;
	for (i = count3 - count1; i <= count3; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = orig2;
	return (dest);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @destination: The destination string
 * @source: The source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;
	char *orig = src;

	while (*src != '\0')
	{
		src++;
		count++;
	}
	src = orig;

	for (i = 0; i <= count; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = orig;
	return (dest);
}

/**
 * _strdup - duplicate a string
 * @str: string
 * Return: duplicated string or Null if failed
 */
char *_strdup(const char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
        {
                return (NULL);
        }

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	 if (!dup)
        {
                return (NULL);
        }

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
