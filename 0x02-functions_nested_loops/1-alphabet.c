#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 *
 * Return : Always (sucess)
 */

void print_alphabate(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
