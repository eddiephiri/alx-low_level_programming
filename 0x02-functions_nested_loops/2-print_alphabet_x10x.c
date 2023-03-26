#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 rows of
 * alphabets in lowercase, followed by a newline.
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
int base = 97;
int line;

for (line = 0; line < 10; line++)
{
while (base <= 122)
{
_putchar(base);
base++;
}
base = 97;
_putchar('\n');
}
}
