#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 *
 * Return: 0
 */

int main(void)
{
char a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
