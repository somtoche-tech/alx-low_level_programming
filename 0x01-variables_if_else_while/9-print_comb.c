#include <stdio.h>
/**
 * main - this prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
int x = 0;
for (x = 48; x < 58; x++)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
