#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints the alphabets
*	Return: 0
*/
int main(void)
{
	int i;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(a[i]);
		}
	}
	putchar('\n');
	return (0);
}
