#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdarg.h>

extern char **environ;
char *_getenv(const char *name);
void env(void);
void execute_command(char *buf, char *argv[]);
void excute_command_args(char *buf, char *argv[]);
void _putchar(char c);
int _printf(const char *format, ...);
size_t _strlen(const char *str);
void _strcpy(char *dest, const char *src);
void _strcat(char *dest, const char *src);
void custom_write(const char *str);
char *_strchr(const char *str, char c);

int _strncmp(const char *str1, const char *str2, size_t n);
int _strcmp(const char *str1, const char *str2);
char *excutels_l(char *buf);
void excute_command_args(char *buf, char *argv[]);
char *path(char *buf);
void excute_command(char *buf, char *argv[]);
void print_prompt(void);
void read_input(char **buffer, size_t *size);
int input_is_exit(const char *buf);
void execute_command_or_args(char *buf, char *argv[]);
char *_strdup(const char *source);
void exit_shell(void);
void run_shell(int ac, char *av[]);
int _printf(const char *format, ...);
int handleCharacter(va_list args, char *buffer, int count);
int handleString(va_list args, char *buffer, int count);
int handlePercentage(char *buffer, int count);
int _snprintf(char *str, size_t size, const char *fmt, ...);
int custom_vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
#endif /*MAIN_H*/
