#include <stdio.h>

/**
 * main - prints base16 hexadecimal numbers and letters in lowercase
 *
 * Return: 0
 */
int main(void)
{
char lower_case;
int x;

for (x = 0; x < 10; x++)
putchar(x + '0');
for (lower_case = 'a'; lower_case < 'g'; lower_case++)
putchar(lower_case);
putchar('\n');
return (0);
}
