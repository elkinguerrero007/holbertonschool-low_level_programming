/**
* _sqrt - compute square root of n number
* @n: number to compute square
* @i: iterator to search if is divisible by i and result is i and mod is 0
* Return: square of -1 if not have square exact
*/
int _sqrt(int n, int i)
{
if (n == i)
return (-1);
if (n / i == i && n % i == 0)
return (i);
return (_sqrt(n, ++i));
}
/**
 * _sqrt_recursion - compute sqrt of n with recursion
 * @n: number to compute square root
 * Return: sqrt from n number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return  (_sqrt(n, 2));
}
