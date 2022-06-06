#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: 1 byte(s)\n", sizeof(char));
	printf("Size of an int: 4 bytes(s)\n", sizeof(int));
	printf("Size of a long int: 8 bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: 8  btyes(s)\n", sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n", sizeof(float));

	return (0);

}
