#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j,l,m,n;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
	l =ABS(0);
	m =ABS(-2);
	n = ABS(1);
    printf("i:%d, j:%d, l:%d, m:%d, n:%d", i, j,l,m,n);
    return (0);
}
