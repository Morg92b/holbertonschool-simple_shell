#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
/*--------------Prototypes------------------*/

void prompt_and_read_input(char **input_line);

/*------------------------------------------*/

char *read_user_input(void);
char **parse_command(char *input_line);

/*------------------------------------------*/

int execute_command(char **args);
int dash_exit(void);

#endif /*SHELL_H*/
