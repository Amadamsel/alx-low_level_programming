#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)

{
int numbers;

for (numbers = 48; numbers <= 57; numbers++)
{
putchar (numbers);

if (numbers == 57)
{
break;
}

putchar (',');
putchar (' ');
}

putchar('\n');

return (0);

}
