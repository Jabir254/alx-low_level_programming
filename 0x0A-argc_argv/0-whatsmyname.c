#include <stdio.h>

/**
 *main - a program that prints its name
 *
 *@argc: holds the number of arguments passed
 *@argv: array pointer that holds the arguments passed
 *
 * Return always 0(SUCCESS)
 */

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
