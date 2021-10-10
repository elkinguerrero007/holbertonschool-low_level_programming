#include "main.h"
/**
 *print_most_numbers-print num - un_2_and_4
 */
void print_most_numbers(void)
{
char n;
for (n = '0' ; n <= '9' ; n++)
{
if (n == '2' || n == '4')
continue;
_putchar(n);
}
_putchar('\n');
}
