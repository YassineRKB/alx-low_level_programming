#include "main.h"
/**
*	print_alphabet - Entry Point
*	Description: prints alphabets
*	Return: 0
*/
void print_alphabet(void)
{
	char ar[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for ( i = 0; i < 26; i++)
	{
		_putchar(ar[i]);
	}
	_putchar('\n');

}
