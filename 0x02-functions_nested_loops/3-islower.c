#include "main.h"

/**
 * islower - returns a boolean
 *@c: Integer value to be checked
 *
 * Return: 1 if @c is lowercase, 0 if otherwise.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
