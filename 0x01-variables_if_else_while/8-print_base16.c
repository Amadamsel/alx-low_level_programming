#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)

{
char hexadecimal;

for (hexadecimal = 48; hexadecimal <= 57; hexadecimal++)
{
putchar(hexadecimal);
}

for (hexadecimal = 97; hexadecimal <= 102; hexadecimal++)
{
putchar(hexadecimal);
}

putchar ('\n');

return (0);

}

