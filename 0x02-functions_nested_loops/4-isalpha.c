#include "holberton.h"

/**
 * _isalpha - this returns 1 if c is lower case and returns 0 if not
 *@c: this is the integer to test
 * Return:1 or 0
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
