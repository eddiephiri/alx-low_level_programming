#include "main.h"
#include <stdio.h>

/**
 * _isupper - Returns a value depending on whether
 * the given parameter is an uppercase or not.
 * @c: char to be checked.
 *
 * Return: 1 if @c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
