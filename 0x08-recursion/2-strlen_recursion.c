#include "main.h"
/**
* _strlen -function that returns the length of a string.
* @s: string
* Return: lenght of the string
**/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s);
	}
	if (*s == '')
	{
		return (len);
	}
	return (len);
}
