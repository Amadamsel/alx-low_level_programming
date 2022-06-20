#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes copied
 * @src: memory area copied from.
 * @dest: memory area copied to.
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) - (src + j);

	return (dest);
}
