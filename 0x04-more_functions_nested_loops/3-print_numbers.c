#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Printes numbers from 0 through 9
 * followed by a newline.
 *
 * Return: No return value.
 */

void print_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
_putchar(i);
}

_putchar('\n');
}
