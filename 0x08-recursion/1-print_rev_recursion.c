#include "main.h"

/**
 * _print_rev_recursion(char *s)
 *
 * @s: pointer to string parameters
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putcharr(*s);
	}
}
