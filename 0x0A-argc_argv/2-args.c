#include <stdio.h>
/**
 * main - prints program's name
 * Return: (0) for success
 * @argc: argument count
 * @argv: argument vector
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
