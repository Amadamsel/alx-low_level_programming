#include "main.h"

/**
 * swap_int - does swapping of memory contents
 * @a: parameter
 * @b: parameter
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
