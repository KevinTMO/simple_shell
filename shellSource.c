#include "shell.h"

/**
 *main - this is the source code of our shell
 *Return: will return 0 or NULL if it closed
 */

int main(void)
{
	int enter = 1, checkInput = 0;
	char *cmd = NULL, *args[MAX_ARGS], PATH[MAX_LEN_CMD], PWD[MAX_LEN_CMD];
	/*char SHELL[MAX_LEN_CMD];*/
	/*char HOME[MAX_LEN_CMD];*/
	size_t size = 0;

	getcwd(PWD, MAX_LEN_CMD);
	_strcpy(PATH, _getenv("PATH")); /*_strcpy(HOME, PWD), _strcpy(SHELL, PWD);*/
	signal(SIGINT, SIG_IGN);

	while (enter)
	{ /*REPL*/
		__isatty();

		checkInput = getline(&cmd, &size, stdin);

		if (checkInput == EOF)
		{
			if (isatty(STDIN_FILENO) == 1)
				_printf("\n");
			free(cmd);
			return (0);
		}
		if (_strlen(cmd) > 0)
		{
			extracTokens(cmd, args), cmd[checkInput - 1] = '\0';

			if (_strcmp(cmd, "cd") == 0)
				_execd(args, PWD);
			else if (_strcmp(cmd, "echo") == 0)
				__echo(args, PATH);
			else if (_strcmp(cmd, "exit") == 0)
				enter = 0;
			else
				externCMD(cmd, args);
		}
		free(cmd);
		cmd = NULL;
	}
	return (0);
}

/**
 *__isatty - will check the file descriptor is std input
 */

void __isatty(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		_printf("$ ");
	}
}
