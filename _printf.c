#include "shell.h"

/**
 *_printStr - this will print a string of character
 *@args: is the next argument in line
 *Return: will return the arguments
 */

int _printStr(va_list args)
{
	char *str;

	str = (char *)va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	return (_putstring(str));
}

/**
 *_printChar - this will print a single character
 *@args: is the next argument in line
 *Return: will return the arguments
 */

int _printChar(va_list args)
{
	int ch;

	ch = (char)va_arg(args, int);

	return (_putchar(ch));
}

/**
 *_printDec - will print an integer to decimal
 *@args: is the list of arguments
 *Return: this will return the count of caracters
 */

int _printDec(va_list args)
{
	long int arguments;
	long int contador = 0;
	long int divisor;

	arguments = va_arg(args, int);

	if (arguments == 0)
	{
		_putchar('0');
		contador++;
	}
	else if (arguments < 0)
	{
		_putchar('-');
		arguments = -arguments;
		contador++;
	}

	if (arguments > 0)
	{
		divisor = 1;
		while (divisor <= arguments)
		{
			divisor *= 10;
		}
		while (divisor > 1)
		{
			divisor /= 10;
			_putchar((arguments / divisor) + '0');
			arguments %= divisor;
			contador++;
		}
	}
	return (contador);
}

/**
 *_printf - will print a string of characters or call functions using %
 *@format: is the string of characters inside the printf
 *Return: will return 0 if sucess
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case '\0':
					return (-1);
				case '%':
					count += _putchar('%');
					format++;
					break;
				case 'c':
					count += _printChar(args);
					format++;
					break;
				case 's':
					count += _printStr(args);
					format++;
					break;
				case 'd':
				case 'i':
					count += _printDec(args);
					format++;
					break;
				default:
					count += _putchar('%');
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	return (count);
}
