#include <unistd.h>

/**
 * _putchar - Prints the given arguments to standard output.
 * @c: The character to print
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
