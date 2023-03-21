#include "main"
/**
* _isalpha - entry point to the check
* Description: checks if char c is an alpha
* @c: char to be checked
* Return: 0 or 1
*/
void _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
