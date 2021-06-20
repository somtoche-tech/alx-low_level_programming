#include <stdio.h>
/**
 * main - prints out the alphabets in lower case
 * Return: 0
 */

int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
