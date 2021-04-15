#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <errno.h>

/* DEFINING MACROS BELOW */

#define MAX_LEN_CMD 1024
#define MAX_ARGS 64

/* DECLARING GLOBAL VARIABLE EXTENSION */

extern char **environ;

/* KEVINTMO PROTOTYPES BELOW */

void __echo(char *args[], char *PWD, char *HOME, char *SHELL, char *PATH);
void externCMD(char *cmd, char *args[]);
void extracTokens(char *cmd, char *args[]);
void dirList(char *PWD, char *args[]);

/* ORIGINAL FUNCTIONS BELOW */

void comExterno(void);
void eco(void);
void listaDir(void);
void separaArgs(void);

/* AUX FUNCTIONS BELOW */

int _putchar(char c);
unsigned int _strlen(char *s);
int _putstring(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _printf(const char *format, ...);
char *_getenv(char *pathName);
char *_memset(char *s, char b, unsigned int n);

/* EXECUTABLE FUNCTIONS */

void _execd(char *args[], char *PWD);
void _exeEcho(char *args[], char *PWD, char *HOME, char *SHELL, char *PATH);
void _exeEnv(char *cmd, char *HOME, char *PWD, char *SHELL, char *PATH);
void _getline(void);

#endif /* SHELL_H */
