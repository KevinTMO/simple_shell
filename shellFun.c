#include "shell.h"

/**
 *extracTokens - will replace delim character for null characters
 *@cmd: is the parameter to the command
 *@args: is the arguments of strings
 *Return: will return nothing (void)
 */

void extracTokens(char *cmd, char *args[])
{
	int index;

	/* @index: will iterate to eliminate the last argument */
	/*for (index = 0; index < (MAX_ARGS - 1); index++)*/
	/*args[index] = NULL;*/

	strtok(cmd, " ");
	index = 0;

	args[index] = cmd;
	while ((args[++index] = strtok(NULL, " ")) != NULL)
	{
		;
	}
}

/**
 *__echo - will print words to the stdout
 *@args: is the arguments of strings
 *@PATH: is holding the path
 *Return: will return nothing (void)
 */

void __echo(char *args[], char *PATH)
{
	unsigned int idxC, idxStr = 0;
	int idxT;
	char tmp[6];
	/* @idxC: will iterate the characters of the strings of the arguments */
	/* @idxT: will iterate the characters of the string tmp */
	/* @idxStr: will iterate the strings of the arguments */
	/* @tmp: will hold the string to compare */

	while (args[++idxStr])
	{
		for (idxC = 0; idxC < _strlen(args[idxStr]); idxC++)
		{
			if (args[idxStr][idxC] != '$')
				_printf("%c", args[idxStr][idxC]);
			else
			{
				idxT = -1;
				while (++idxT < 5 && (idxC + idxT + 1) < _strlen(args[idxStr])
				       && args[idxStr][idxC + idxT + 1] != '\0')
				{
					tmp[idxT] = args[idxStr][idxC + idxT + 1];
				}
				tmp[idxT] = '\0';
				if (_strcmp(tmp, "PATH") == 0)
					_printf("%s", PATH), idxC += 4;
				else
					_printf("$");
			}
		}
		_printf(" ");
	}
	_printf("\n");
}

/**
 *externCMD - will access the commands of the environment
 *@cmd: is the input command
 *@args: is the arguments of strings
 *Return: will return nothing (void)
 */

void externCMD(char *cmd, char *args[])
{
	int pid = 0; /* @pid: is the variable of the process identification */
	int status; /* is the variable that will receive the return val of execvp */

	pid = fork();

	if (pid < 0)
		_printf("Error: the child process couldn't be created\n");

	if (pid == 0)
	{
		status = execvp(cmd, args);

		if (status)
		{
			_printf("Error: it couldn't recognize %s or couldn't execute\n", cmd);
			exit(1);
		}
	}
	else
		wait(NULL);
}
