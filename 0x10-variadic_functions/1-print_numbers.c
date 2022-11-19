#include "variadic_functions.h"
/**
 *print_numbers - print numbers follwed by a new line
 *
 *@separator: strings to be printed between numbers
 *
 * @n: number of integer to be passed
 *
 * Return: 0
 */
void print_numbers(const char *separator, cont unsigned int n, ...)
{
    va_list list;
    unsigned int i;

    va start(list, n);

    for(i = 0; i < n; i++)
    {
        printf("%d", va_arg(li, int));

        if(i != (n - 1) && separator != NULL)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(list)

}
