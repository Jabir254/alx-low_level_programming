#include "main.h"
/**
 *
 * print_last_digit-a function that prints the last digit of a number.
 *
 *@n: takes number input
 *
 *Return: v
 */

int print_last_digit(int n)
{
	int v;

	if (n < 0)
		v = -1 * (n % 10);
	else
		v = n % 10;
	_putchar(v + '0');
	return (v);
