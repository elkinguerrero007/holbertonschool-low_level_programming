/**
 * reverse_array - reverse of the array;
 * @a: array
 * @n: size
  */
void reverse_array(int *a, int n)
{
	int i = 0, b = n - 1, c;

	for (; i < b && i < n; i++, b--)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
