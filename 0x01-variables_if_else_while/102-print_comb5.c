#include <stdio.h>
/**
* main - print all possible combination of two two-digit numbers
* Return: always 0 (Success)
*/
int main(void)
{
int m, a;
for (m = 0; m < 100; m++)
{
for (a = 0; a < 100; a++)
{
if (m < a)
{
putchar((m / 10) + 48);
putchar((m % 10) + 48);
putchar(' ');
putchar((a / 10) + 48);
putchar((a % 10) + 48);
if (m != 98 || a != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
