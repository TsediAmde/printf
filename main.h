#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _printf(const char *format, ...);
void print_number(int n, int *count);

/**
 * struct vartype - struct vartype
 *
 * @vartype: type of variable to be printed
 * @f: the function associated
 */

typedef struct vartype
{
	char *vartype;
	int (*f)(va_list);
} var_t;

int c_func(va_list args);
int s_func(va_list args);
int perc_func(va_list args);
int i_func(va_list args);
int d_func(va_list args);
int b_func(va_list args);
int rev_func(va_list args);
int rot_func(va_list args);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
#endif
