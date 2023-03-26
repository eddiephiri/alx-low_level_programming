#include "main.h"

/**
 * main - Prints '_putchar' followed by a newline
 * to the standard output.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char out[9] = {95, 112, 117, 116, 99, 104, 97, 114};
int i = 0;

while (i < 9)
{
_putchar(out[i]);
i++;
}

return (0);
}
