#include <stdio.h>

/**
 * main - Prints all single digit numbers and a newline only using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

while (i < 10)
{
putchar("%d", i);

i++;
}

putchar(10);

return (0);
}
