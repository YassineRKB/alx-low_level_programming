#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * OriginalFile: https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
