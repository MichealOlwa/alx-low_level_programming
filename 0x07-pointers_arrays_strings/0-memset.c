#include "main.h"

/**
 * _memset - fill memory with constant
 * @s: space of memory
 * @b: bytes
 * @n: memory area
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigngned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
