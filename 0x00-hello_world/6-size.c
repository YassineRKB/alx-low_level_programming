#include <stdio.h>
/**
*	main - Entry Point.
*	Desctiotion: prints the size of different type.
*	Return: Always 0.
*/
int main(void)
{
	printf("Size of a char:%s", sizeof(char));
	printf("Size of an int:%s", sizeof(int));
	printf("Size of a long:%s", sizeof(long));
	printf("Size of a long long:%s", sizeof(long long));
	printf("Size of a float:%s", sizeof(float));
	return (0);
}
