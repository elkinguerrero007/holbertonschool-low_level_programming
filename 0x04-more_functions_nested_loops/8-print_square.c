#include "main.h"
/**
 * print_square - print a square
 * @size: n is columns
 */
void print_square(int size)
{
if (size < 1)
_putchar('\n');
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
