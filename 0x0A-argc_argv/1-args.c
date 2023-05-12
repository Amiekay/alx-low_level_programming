#include <stdio.h>
/**
 * main - prints program's name
 * Return: (0) for success
 * @argc: argument count
 * @argv: array of arguments
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
