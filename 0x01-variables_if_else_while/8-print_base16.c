#include<stdio.h>
/**
 * main - print alphab y numb
 * Return: (0) Success Always
 */
int main(void)
{
char n;
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
return (0);
}
