#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list list;

    if( n == 0)
        return 0;


    va_start(list, n);
    
    int i, sum = 0;
   
    for(i = 0; i < n; i++)
    {
        sum += va_arg(list, int);
    }

    va_end(list);

    return sum;
}
