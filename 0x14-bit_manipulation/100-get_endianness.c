#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: ) if big endian, 1 if litt;e endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
