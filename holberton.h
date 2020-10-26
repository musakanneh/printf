#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int string_position(char *str);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);
int _abs(int n);
int _numlen(int n);
void *rev_string(char *s);

#endif
