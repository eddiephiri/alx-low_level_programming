#include <stdio.h>

/**
 * main - Print a lowsercase alphabet in reverse and a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 122;

while (i >= 97)
{
putchar(i);
i--;
}

putchar(10);

return (0);
}
