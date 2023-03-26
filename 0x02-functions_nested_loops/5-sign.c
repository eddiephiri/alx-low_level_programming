#include "main.h"

/**
 * print_sign - Prints the sign of the given input
 * @n: Integer input to be checked
 *
 * Return: 1 and prints + if @n is > 0,
 * 0 and prints 0 if @n is 0,
 * -1 and prints - if @n is < 0
 */
int print_sign(int n)
{
if (n == 0)
{
printf("0");
return (0);
}
else if (n < 0)
{
printf("-");
return (-1);
}

printf("+");
return (1);
}
