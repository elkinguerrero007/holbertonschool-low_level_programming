#include <stdio.h>

/**
 *main - prints the alphabet in low and upper
 *Return: (0)
 */
int main(void)
{
char n, i;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

