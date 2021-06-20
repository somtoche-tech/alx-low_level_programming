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
char alph = 'A';
while (alph <= 'Z')
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
