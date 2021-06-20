#include <stdio.h>
/**
 * main - prints out the alphabets in lower case and in upper case too
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
a = 'A';
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
