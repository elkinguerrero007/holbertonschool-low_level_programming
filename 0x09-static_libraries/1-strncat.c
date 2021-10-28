#include "main.h"
#include <stdio.h>
/**
* _strncat - concat to dest
* @dest: string complete
* @src:  string to twich with dest
* @n:    number of characters to join
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	while (dest[length])
		length++;

	for (i = 0; i < n && src[i] ; i++, length++)
		dest[length] = src[i];

	return (dest);
}
