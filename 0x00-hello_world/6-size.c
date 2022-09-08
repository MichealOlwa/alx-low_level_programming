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
	long a_long;
	long long a_longlong;
	float a_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(a_character));
	printf("Size of int: %lu byte(s)\n", sizeof(a_integer));
	printf("Size of long: %lu byte(s)\n", sizeof(a_long));
	printf("Size of long long: %lu byte(s)\n", sizeof(a_longlong));
        printf("Size of float: %lu byte(s)\n", sizeof(a_float));
	
	return (0);
}
