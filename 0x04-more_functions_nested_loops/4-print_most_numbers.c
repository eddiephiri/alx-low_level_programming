#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers 0 through 9
 * excluding 2 and 4
 *
 * Return: None.
 */

void print_most_numbers(void)
{
for (int i = 48; i <= 57; i++)
{
if (i != 2 && i != 4)
{
_putchar(i);
}
}

_putchar('\n');
}
