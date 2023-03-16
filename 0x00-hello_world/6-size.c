#include <stdio.h>
/**
*	main - Entry Point.
*	Desctiotion: prints the size of different type.
*	Return: Always 0.
*/
int main(void)
{
	printf("Size of a char: %s byte(s)", sizeof(char));
	printf("Size of an int: %ld byte(s)", sizeof(int));
	printf("Size of a long: %ld byte(s)", sizeof(long));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
