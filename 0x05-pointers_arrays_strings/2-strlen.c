/**
 *_strlen-show length of a string
 *@s:evalue length of a string
 *Return: length of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != 0)
i++;
return (i);
}
