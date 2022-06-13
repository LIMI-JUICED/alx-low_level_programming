#include "main.h"

/**
 * _srtlen - calculate the length of a string.
 *
 * @s: the string calculate it's length.
 * Return: length of a string.
 */

int_srtlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
