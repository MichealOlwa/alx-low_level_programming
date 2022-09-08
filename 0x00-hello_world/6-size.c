#include<stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a_character;
	int a_integer;
	float a_float;
	long a_long;
	long long a_longlong;

	printf("Size of a char: %lu byte(s)\n", sizeof(a_character));
	printf("Size of int: %lu byte(s)\n", sizeof(a_integer));
	printf("Size of float: %lu byte(s)\n", sizeof(a_float));
	printf("Size of long: %lu byte(s)\n", sizeof(a_long));
	printf("Size of long long: %lu byte(s)\n", sizeof(a_longlong));

	return(0);
}
