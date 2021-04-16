#include "shell.h"

/**
 *_execd - will execute the change directory function
 *@args: is the pointer to strings of arguments
 *@PWD: is the working directory
 *Return: will return nothing (void)
 */

void _execd(char *args[], char *PWD)
{
	if (args[1])
	{
		if (chdir(args[1]) != 0)
		{
			_printf("Error: Directory not found or doesn't exist\n", args[1]);
		}
		else
			getcwd(PWD, MAX_LEN_CMD);
	}
}

/**
 *_exeEnv - will execute the statements for the environment
 *@cmd: is the name of the environment
 *@HOME: one of the global variables
 *@PWD: one of the global variables
 *@SHELL: one of the global variables
 *@PATH: one of the global variables
 *Return: will return nothing (void)
 */

void _exeEnv(char *cmd, char *HOME, char *PWD, char *SHELL, char *PATH)
{
	if (_strcmp(cmd, "environ") == 0)
	{
		_printf(" Environment Variables:\n");
		_printf(" HOME=%s\n  PWD=%s\n", HOME, PWD);
		_printf(" SHELL=%s\n  PATH=%s\n", SHELL, PATH);
	}
}
/**
 *_getline - this will get the buffer of the stdin
 *Return: will return nothing (void)
 */

void _getline(void)
{
	char *buffer = NULL;
	ssize_t valueVar = 0;
	size_t size = 1024;

	if (isatty(STDIN_FILENO) == 1)
	{
		_printf("$ ");
	}
	_printf("t1");
	valueVar = getline(&buffer, &size, stdin);
	_printf("t2");
	if (valueVar == EOF)
	{
		free(buffer);
		perror("End of file");
		exit(-1);
	}
	_printf("t3");
}
