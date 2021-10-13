#include "main.h"
#include <stdio.h>
/**
 * puts_half - print from middle to end
 * @str: characters
 */
void puts_half(char *str)
{
long l = 0, m, i;
while (str[l])
l++;
if (l % 2 == 0)
m = l / 2;
else
m = (l - 1) / 2;
for (i = m; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
