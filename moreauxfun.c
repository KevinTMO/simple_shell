#include "shell.h"

/**
 *_putchar - this will print one character at a time
 *@c: this is the parameter for character
 *Return: will return the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_memset - will fill the memory block that is pointing
 *@s: is the first parameter that point to the memory block to fill
 *@b: is the second parameter to pass the memory to the pointer
 *@n: is the numbers of the memory that is passing
 *Return: will return the result of the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	if (n > 0)
	{
		for (index = 0; index < n; index++)
		{
			s[index] = b;
		}
	}
	return (s);
}

/**
 *_getenv - will get the the environment for PATH
 *@pathName: the name of environment variable to be found
 *Return: will return the path for the environment variable
 */

char *_getenv(char *pathName)
{
	char *envCopy = pathName;
	int index, sindex;

	for (index = 0; environ[index] != NULL; index++)
	{
		for (sindex = 0; environ[index][sindex] != '\0'; sindex++)
		{
			while (environ[index][sindex] == *envCopy)
			{
				sindex++;
				envCopy++;
			}
			if (*envCopy == '\0')
			{
				return (environ[index]);
			}
		}
	}
	return (NULL);
}
