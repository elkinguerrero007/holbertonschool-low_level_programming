#include "main.h"
/**
 * more_numbers - Prints num 0 to 14
 *
 */
void more_numbers(void)
{
int a;
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
}
_putchar('\n');
}
