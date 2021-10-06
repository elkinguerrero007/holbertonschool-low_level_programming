#include "main.h"
/**
 * largest_number - largest of 3 numbers
 * @a: first num
 * @b: second num
 * @c: third num
 * Return: largest num
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && b >= c)
{
largest = a;
}
else if (b >= a && a >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
