#include "stdio.h"
#include "main.h"
/**
*print_to_98 - entry point to code
*description: prints all natural numbers from n to 98
*@n: int number
*Return: all natural numbers from n to 98
**/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n > 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		for (n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
}
