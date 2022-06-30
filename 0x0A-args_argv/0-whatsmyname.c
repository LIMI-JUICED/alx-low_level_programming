#include <stdio.h>

/**
 * main - prints its name foloowed by a new line
 * 
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
