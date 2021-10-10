#include "main.h"
/**
 * print_line - print _lines
 * @n: lines _ to print
 */
void print_line(int n)
{
int i;
if (n < 1)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
_putchar('_');
_putchar('\n');
}
}
