#include <stdio.h>

/**
* main - entry point
*
* Description: Print numbers 0 - 9 on a line
* Return: 0
*/
int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
