#include <stdio.h>

/**
 * _putchar - writes the character c to output  stdout
 * @c: defines the character to print
 *
 * Return: On success 1.
 * On issue/error, -1 is returned,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
