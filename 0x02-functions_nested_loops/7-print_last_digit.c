#include "main.h"
/**
 * print_last_digit -last_digit
 * @n:caracter to print
 * Return: (0) Success Always
 */
int print_last_digit(int n)
{
int  i = n % 10;

if (i < 0)
i = -i;
_putchar('0' + i);
return (i);
}


