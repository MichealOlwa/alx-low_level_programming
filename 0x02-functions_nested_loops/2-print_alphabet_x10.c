#include "main.h"

/**
 * print_alphate_x10 - prints alphate 10 times
 *
 * Return:void
 */
void print_alphate_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
