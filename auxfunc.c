#include "shell.h"

/**
 *_strlen - will get the lenght of the string (argument)
 *@s: is the string to get the lenght
 *Return: will return the lenght
 */

unsigned int _strlen(char *s)
{
	unsigned int index;

	index = 0;

	while (*s)
	{
		s++;
		index++;
	}
	return (index);
}

/**
 *_putstring - will put the string after getting the length
 *@s: the string to print
 *Return: (argument) to print stdout
 */

int _putstring(char *s)
{
	return (write(1, s, _strlen(s)));
}

/**
 * _strcmp - will compare S1 with S2 until there's a diff in character pos
 * @s1: the firs string
 * @s2: the second string
 * Return: will return 0 if they are the same or another value if not
 */

int _strcmp(char *s1, char *s2)
{
	int index, result;

	index = 0;

	while (s1[index] != '\0')
	{
		if (s1[index] == s2[index])
		{
			index++;
			result = s1[index] - s2[index];
		}
		else
		{
			result = s1[index] - s2[index];
			break;
		}
	}

	return (result);
}

/**
 *_strcat - will concatenate (unite) two strings using two pointers
 *@dest: is the pointer to s1 (string one)
 *@src: is the pointer to s2 (string two)
 *Return: will return dest value (string one with string two)
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int sindex;

	for (index = 0; dest[index] != '\0'; index++)
	{
		;
	}
	for (sindex = 0; src[sindex] != '\0'; sindex++)
	{
		dest[index] = src[sindex];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}

/**
 *_strcpy - will copy the string of a pointer to another pointer
 *@dest: is the pointer to pasty the copied string
 *@src: is the pointer that hold the string to get copy
 *Return: will return dest value
 */

char *_strcpy(char *dest, char *src)
{
	int index;
	int sindex;

	for (index = 0; src[index] != '\0'; index++)
	{
		;
	}
	for (sindex = 0; sindex <= index; sindex++)
	{
		dest[sindex] = src[sindex];
	}
	return (dest);
}
