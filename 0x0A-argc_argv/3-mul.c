#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program's name
 * Return: (0) for success
 * @argc: argument count
 * @argv: argument vector
*/
int main(int argc, char *argv[])
{
        int i;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			int result = strtod (argv[i] * argv[i -1]) const char *__restrict __nptr,;
			printf("%d\n", result);
		}
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
