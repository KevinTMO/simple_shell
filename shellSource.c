#include "shell.h"

/**
 *main - this is the source code of our shell
 *Return: will return 0 or NULL if it closed
 */

int main(void)
{
	int enter = 1;
	char cmd[MAX_LEN_CMD], *args[MAX_ARGS],	SHELL[MAX_LEN_CMD];
	char PATH[MAX_LEN_CMD], HOME[MAX_LEN_CMD], PWD[MAX_LEN_CMD];

	getcwd(PWD, MAX_LEN_CMD);
	_strcpy(PATH, _getenv("PATH")), _strcpy(HOME, PWD), _strcpy(SHELL, PWD);

	do { /*REPL*/
		_printf(" %s$ ", PWD), __fpurge(stdin),	_memset(cmd, '\0', MAX_LEN_CMD);
		scanf("%[^\n]s", cmd);

		if (cmd[0] == '\0' || _strcmp(cmd, "\n") == 0)
		{
			_putchar('\n'), exit(EXIT_SUCCESS);
		}
		if (_strlen(cmd) > 0)
		{
			extracTokens(cmd, args);
			if (_strcmp(cmd, "cd") == 0)
				_execd(args, PWD);
			else if (_strcmp(cmd, "clear") == 0)
			{
				_strcpy(cmd, "clear");
				externCMD(cmd, args);
			}
			_exeEnv(cmd, HOME, PWD, SHELL, PATH);
			if (_strcmp(cmd, "echo") == 0)
				_exeEcho(args, PWD, HOME, SHELL, PATH);
			else if
				(_strcmp(cmd, "pwd") == 0)
				_printf("%s\n", PWD);
			else if
				(_strcmp(cmd, "exit") == 0)
				enter = 0;
			else
				externCMD(cmd, args);
		}
	} while (enter);
	return (0);
}
