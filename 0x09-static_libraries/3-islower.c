#include "main.h"
/**
* _islower - entry point to check the char c
* Description: checks n and returns 1 if lowercase else 0
* @c : char to be checked
* Return:  0 or 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
