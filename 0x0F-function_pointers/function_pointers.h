#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include "_putchar.h"
int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void print_with_newline(char *name);
void print_with_dashes(char *name);
#endif