#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * @a: array 2d
 * @size: length of the array
 */
void print_diagsums(int *a, int size)
{
int One = 0;
int Two = 0;

int i = 0;
int j = 0;
int k = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
One += a[k];
}
if ((i + j) == size - 1)
{
Two += a[k];
}
k++;
}
}
printf("%d, ", One);
printf("%d\n", Two);
}
