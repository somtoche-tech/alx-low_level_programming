#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes here */

/* betty style doc for function main goes there */

/**
 * main - this program prints the last digit of n
 * and prints out whether it is greater than 5, 0 or
 * less than 6
 * Return: (0)
 */

int main(void)
{
int n;
int lstDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lstDigit = n % 10;
printf("Last digit of %1 is %1 and is ", n, lstDigit);
if lstDigit > 5)
printf("greater than 5\n");
else if (lstDigit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
