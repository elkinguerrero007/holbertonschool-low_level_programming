/**
 * string_toupper - text to uppercase
 * @s: text  to uppercase
 * Return: char*
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 123)
			s[i] -= 32;
	}

	return (s);
}
