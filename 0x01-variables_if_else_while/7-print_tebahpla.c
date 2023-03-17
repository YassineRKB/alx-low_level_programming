#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints the alphabets in reverse
*	Return: 0
*/
int main(void)
{
	int i;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; --i)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
