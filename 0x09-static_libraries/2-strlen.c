#include "main.h"

/**
 * _srtlen - calculate the leng of a string.
 *
 * @s: string.
 * 
 * Return: Length
 */

int _srtlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
