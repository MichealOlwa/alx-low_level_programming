#include "main.h"

/**
 * swap_int - swap numbers function
 * @a: integer
 * @b: integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int holding;

	holding = *a;
	*a = *b;
	*b = holding;
}
