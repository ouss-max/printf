#include "main.h"
/**
 * get_size - Calculates the size to cast  argument
 * @format: Formatted string in which to print arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
int inow = *i + 1;
int size = 0;

if (format[inow] == 'l')
size = S_LONG;
else if (format[inow] == 'h')
size = S_SHORT;
if (size == 0)
*i = inow - 1;
else
*i = inow;
return (size);
}
