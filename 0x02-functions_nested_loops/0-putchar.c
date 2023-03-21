#include <stdio.h>
#include <main.h>
/**
* main - Entry Point
* Description: prints _putchar
* Return: 0
*/
int main(void)
{
	char ar[8] = "_putchar\n";
	int i;

	for (i=0; i<8; i++)
	{
		putchar(ar[i]+'0');
	}
	return (0);
}
