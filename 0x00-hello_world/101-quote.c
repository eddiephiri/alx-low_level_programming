#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints exactly: and that piece of art is useful"
 * - Dora Korpar, 2015-10-09
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-09\n", 59);
return (1);
}
