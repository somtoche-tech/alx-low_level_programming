#include <stdio.h>

/**
 * main - prints all aphabets except for q and e
 * Return: 0
 */

int main(void)
{
char chr;

for (chr = 'a'; chr <= 'z'; chr++)
if (chr != 'e' && chr != 'q')
putchar(chr);
putchar('\n');
return (0);
}
