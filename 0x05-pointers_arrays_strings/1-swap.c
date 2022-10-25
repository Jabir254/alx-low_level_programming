#include "main.h"
/**
  *swap_int -> swapping two integers
  *@a: par 1
  *@b: par 2
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
