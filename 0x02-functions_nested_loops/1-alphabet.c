#include "main.h"
/**
*	main - Entry Point
*	Description: prints alphabets
*	Return: 0
*/
int main(void)
{
	char ar[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	void print_alphabet()
	{
		for( i = 0; i <= 26; i++)
		{
			_putchar(ar[i]);
		}
		_putchar('\n');
	}
	return (0);
}
