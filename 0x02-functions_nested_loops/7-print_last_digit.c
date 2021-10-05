#include "main.h"
/**
 * print_last_digit - print_last_digit
 * @i:caracter to print
 * Return: (0) Success Always
 */
int print_last_digit(int n)
{
int i = n % 10;

if (i < 0)
i = -i;
_putchar('0' + i);
return (i);
}
