#include <stdio.h>
/**
 * main - prints combination of two digit number possible
 *
 * Return: 0
 */
int main(void)
{
int x;
int y;

for (x = 48; x < 58; x++)
{
for (y = x; y < 58; y++)
{
if (x == y)
continue;
putchar(x);
putchar(y);
if (x == 56 && y == 57)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
