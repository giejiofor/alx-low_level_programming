#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: Prints a number and it's last digit along with whether its
 *last digit is 0, greater than 5, or less than 6 and not 0.
 *Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastDigit;
lastDigit = n%10;

if(lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if(lastDigit == 0)
{
printf("Last didgit of %d is %d and is 0\n", n, lastDigit);
}
else if(lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n" , n, lastDigit);
}
return (0);
}
