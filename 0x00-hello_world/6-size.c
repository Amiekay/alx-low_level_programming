#include <stdio.h>
/**
 * main - prints sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
