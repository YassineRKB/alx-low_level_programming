# include "main.h"
/**
* _strstr - function that locates a substring.
* @haystack: string to scan
* @needle: string to match
* Return: Pointer or Null.
**/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
