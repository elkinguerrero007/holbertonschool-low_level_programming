#include "main.h"
#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest: concatenation
 * @src: strint to concat
 * Return: concat String
 */
char *_strcat(char *dest, char *src)
{
	int b = 0, i;

	while (dest[b])
		b++;

	for (i = 0; src[i]; i++, b++)
		dest[b] = src[i];
	dest[b] = 0;
	return (dest);
}

