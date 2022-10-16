#include <stdio.h>

/**

 * main - print the letters of the alphabet

 *

 * Description: print the letters of the alphabet

 *

 * Return: Always 0 (Success)

 */

int main(void)
{
	int x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x ++;
	}
	putchar('\n');
	return(0);
}
