#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %i is %i", n, (n % 10));
if (n > 5)
printf("and is greater than 5");
else if (n < 6)
{
printf("and is less than 6 and not 0");
}
else
{
printf("and is 0");
}
return (0);
}

