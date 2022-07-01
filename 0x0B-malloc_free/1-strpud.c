#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer which contains a copy of a string as a parameter
 *
 * @str: string parameter
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	int i = 1; j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i]) 
		i++;
	s = (char *)malloc( i * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
