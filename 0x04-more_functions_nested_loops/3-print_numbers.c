#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Printes numbers from 0 through 9
 * followed by a newline.
 *
 * Return: Alwasy (0) Success.
 */

int print_numbers(void)
{
for (int i = 48; i <= 59; i++)
{
_puthcar(i);
}

_putchar('\n');

return (0);
}
