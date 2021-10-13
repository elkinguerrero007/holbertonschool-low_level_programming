#include "main.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse 
 * @s: characters
 */
void rev_string(char *s)
{
	int i = 0, fin = 0;
	char c;

	while (s[fin] != 0)
		fin++;
	fin--;

	while (i < fin)
	{
		c = s[i];
		s[i] = s[fin];
		s[fin] = c;
		i++;
		fin--;
	}
}

