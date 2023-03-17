#include <stdio.h>

/**
 * main - Prints the sizes of various types in C
 *
 *Returns: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)",sizeof(char));
printf("Size of an int: %d bytes(s)",sizeof(int));
printf("Size of a long int: %d byte(s)",sizeof(long));
printf("Size of a long long int: %d bytes(s)",sizeof(long long));
printf("Size of a float: %d byte(s)",sizeof(float));
}
