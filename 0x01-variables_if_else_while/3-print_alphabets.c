#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints the alphabets in lowercase then uppercase
*	Return: 0
*/
int main(void)
{
	int i;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(b[i]);
	}
	putchar('\n');
	return (0);
}
