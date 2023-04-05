# include "main.h"
/**
* is_palindrome - function that returns 1 if a string
* is a palindrome and 0 if not.
* @s: string to be checked.
* Return: 1 if palindrome or 0 if not
**/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check(s, len - 1));
}

/**
* check - recursive function to check if palindrome
* @s: string to be checked.
* @l: lenght of sring
* Return: 1 or 0
**/
int check(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (check(s + 1, l - 2));
	}
	return (0);
}

/**
* _strlen_recursion -function that returns the length of a string.
* @s: string
* Return: lenght of the string
**/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
