#include "main.h"
/**
 * get_precision - Calculates the precision
 * @format: Formatted string
 * @i: List of arguments to be prented
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
int inow = *i + 1;
int precision = -1;
if (format[inow] != '.')
return (precision);
precision = 0;
for (inow += 1; format[inow] != '\0'; inow++)
{
if (is_digit(format[inow]))
{
precision *= 10;
precision += format[inow] - '0';
}
else if (format[inow] == '*')
{
inow++;
precision = va_arg(list, int);
break;
}
else
break;
}
*i = inow - 1;
return (precision);
}
