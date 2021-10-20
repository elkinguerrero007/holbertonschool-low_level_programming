#include <stddef.h>
/**
 * _strchr - find first occurrence an
 * @s: String which search character
 * @c: character to find
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
