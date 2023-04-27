#include <stdio.h>

/**
* bmain - function to be run before main
* Return: Void.
**/
void __attribute__ ((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
