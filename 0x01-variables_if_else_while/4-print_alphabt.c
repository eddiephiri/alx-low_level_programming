#include <stdio.h>

/**
 * main - Prints lowercase alphabet excluding 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 97;

while (i <= 122)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}

putchar(10);

return (0);
}
