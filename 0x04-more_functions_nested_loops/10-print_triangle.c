#include "main.h"
/**
 * print_triangle - print triangule;
 * @size: print a  triangule
 */
void print_triangle(int size)
{
if (size < 1)
_putchar('\n');
else
{
int i, j, space = size - 1;
for (i = 0; i < size; i++)
{
space--;
for (j = 0; j < size; j++)
{
if (j <= space)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
