#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a newline.
 *
 * Return: - Alwasy 0 (Success)
 */
int main(void)
{
int i = 0;
char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};

while (i < 26)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');

return (0);
}
