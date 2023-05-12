#include <stdio.h>
/**
 * main - prints program's name
 * Return: (0) for success
 * @argc: argument count
 * @argv: one-dimensional array of strings
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("The program's name is %s\n", argv);
	return (0);
}
