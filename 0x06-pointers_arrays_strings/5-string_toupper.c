#include "main.h"
/**
  * string_toupper -> converting any string to upper case
  * @x: string param
  * Return: string
  */

char *string_toupper(char *x)
{
    int i;
    for (i = 0; x[i] != '\0'; i++)
    {
            if (x[i] >= 'a' && x[i] <= 'z')
                    x[i] =(int)x[i] - 32;
    }
    return (x);
 }
