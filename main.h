#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* MACROS */
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/* PROTOTYPES */
/*---main.c---*/
void shell_interactive(void);
void shell_non_interactive(void);

/*---shell_interactive---*/
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/*---shell_non_interactive---*/
char *read_stream(void);

/*---execute_args---*/
int new_process(char **args);
int num_builtins(void);
#endif
