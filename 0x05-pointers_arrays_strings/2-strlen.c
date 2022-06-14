#include "main.h"

/**
 * _srtlen - calculate the length of a string.
 *
 * @s: the string calculate it's length.
 * 
 * Return: Always (0)
 */

int_srtlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
