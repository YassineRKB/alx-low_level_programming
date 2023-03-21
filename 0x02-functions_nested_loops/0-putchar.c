#include <stdio.h>
#include "main.h"
/**
* main - Entry Point
* Description: prints _putchar
* Return: 0
*/
int main(void)
{
	char ar[8] = "_putchar";
	int i;

	for (i=0; i<8; i++)
	{
		_putchar(ar[i]);
	}
	_putchar('\n');
	return (0);
}
