#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)

{
int single-digit-numbs;

for (single-digit-numbs = 48; single-digit-numbs <= 57; single-digit-numbs++)
{
putchar(single-digit-numbs);

if (single-digit-numbs == 57)
{
break;
}

putchar (',');
putchar (' ');
}

putchar('\n');

return (0);

}
