#include <stdio.h>
#include <stdlib.h>
/**
 *main; to print addition of two numbers
 *@argc; 
 *@argv:
 *
 * return: 0
 *
 */
int main(int argc, char* argv[])
{
	int a, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; argv[a]; a++)
	{
		n = strtol(argv[a], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
