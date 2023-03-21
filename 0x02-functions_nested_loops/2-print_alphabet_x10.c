#include "main.h"
/** print_alphabet_x10 - entrypoint.
* Description: prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char ar[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 0; l < 26; l++)
		{
			_putchar(ar[j]);
		}
	_putchar('\n');
	}
}
