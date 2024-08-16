#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>
#include <stddef.h>

/*--------------Prototypes------------------*/

void prompt_and_read_input(char **input_line);
void *my_realloc(void *ptr, size_t new_size);

/*------------------------------------------*/

char *read_user_input(void);
char **parse_command(char *input_line);
char *find_executable_path(char *command);
char *_getenv(char *name);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);

/*------------------------------------------*/

int execute_command(char **args);
int dash_exit(void);
int env_environ(void);
int _strcmp(char *s1, char *s2);
int _strncmp(char *str1, char *str2, size_t n);
int _strlen(char *s);

/*-----------------------------------------*/

extern char	**environ;

#endif /*SHELL_H*/
