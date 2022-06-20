#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: first byte of the memory area
 * Return: the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;


	for (j = 0; j < n; j++)
		*(s + j) = b;

	return(s);
}
