#include <stdio.h>

/**
 * main - print alphabet without q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for(c = 'a';c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
