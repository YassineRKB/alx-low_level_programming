#include <stdio.h>
#include "main.h"
/**
* main - Entry Point
* Description: prints _putchar
* Return: 0
*/
int main(void)
{
	char ar[9] = "_putchar\n";
	int i;

	for (i=0; i<9; i++)
	{
		_putchar(ar[i]);
	}
	return (0);
}
