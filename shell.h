#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>

#define BUFFER_SIZE 1024
/*--------------Prototypes------------------*/

extern char	**environ;

int	main(void);

void	prompt(void);
void	execute_command(char *buffer);
void	remove_newline(char *buffer);

#endif /*SHELL_H*/
