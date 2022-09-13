#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 *
 * Return : Always (sucess)
 */
void print_alphabate(void)
{
	char alphate;

	for (alphate = 'a'; alphate <= 'z'; alphate++)
	{
		_putchar(alphate);
	}

	_putchar('\n');
}
