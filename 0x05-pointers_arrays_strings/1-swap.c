#include "main.h"

/** 
 * sawp_int - swap the value of two integers 
 * using two iput parameters
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
