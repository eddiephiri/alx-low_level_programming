#include "main.h"

/**
 * main - Prints '_putchar' followed by a newline
 * to the standard output.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char out[9] = {"_", "p", "u", "t", "c", "h", "a", "r", "\n"};
int i = 0;

while (i < 9)
{
_putchar(out[i]);
i++;
}

return (0);
}
