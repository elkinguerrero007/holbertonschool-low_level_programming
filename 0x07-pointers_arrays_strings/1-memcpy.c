/**
 * _memcpy - copy of memory from s
 * @dest: memory destiny
 * @src: Source
 * @n: number of chars to copy
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
