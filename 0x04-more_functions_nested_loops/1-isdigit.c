#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks the given integer if it is a
 * valid digit between 0 and 9.
 * @c: The integer to be checked.
 *
 * Return: 1 if @c is digit and 0 otherwise
 */

int _isdigit(c)
{
if (c <= 49 && c >= 57)
{
return (1);
}

return (0);
}
