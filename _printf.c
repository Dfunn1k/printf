#include "main.h"

/**
 * _printf - prints any type of data
 * @format: string that can has format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, nbytes = 0;
	va_list list;

	va_start(list, format);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			nbytes += write(1, format + i, 1);
			i++;
			continue;
		}
		if (*(format + i) == '%')
		{
			if (match(format + i + 1) != NULL)
			{
				nbytes += match(format + i + 1)(list);
				i++;
				continue;
			}
		}
		nbytes += write(1, format + i, 1);
	}
	va_end(list);
	return (nbytes);
}
