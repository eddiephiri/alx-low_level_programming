#include "main.h"
#include <stdio.h>

/**
 * *_memset - Fills n bytes from one memory location to another.
 * @s: Memory location to be filled.
 * @n: Unsigned integer indicating number of bytes to fill.
 * @b: Char to be used to fill the memory location @s.
 *
 * Return: A pointer to memory location @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
