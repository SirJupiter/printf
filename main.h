#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct the_formats - struct for formats
 * @ch_ptr: pointers to the character specifiers
 * @spec_func: functions for handling the specifiers
*/
typedef struct the_formats
{
	const char *ch_ptr;
	int (*spec_func)(va_list);
} specifier;

int _printf(const char *format, ...);
int conditions(struct the_formats s[], va_list list, const char *p);
int _putchar(char ch);
int _handle_ch(va_list list);
int _handle_str(va_list list);
int _handle_perc(va_list list);
int _handle_dec(va_list list);
int _handle_int(va_list list);
int _handle_bin(va_list list);
int _handle_uns_dec(va_list list);
int _helper_print_dec_rev(unsigned int number);
int _handle_octa(va_list list);
int _helper_print_octa_rev(unsigned int number);
int _handle_hexa(va_list list);
int _helper_print_hexa_rev(unsigned int number);
int _handle_hexa_upper(va_list list);
int _helper_print_hexa_upper_rev(unsigned int number);
int _handle_revs_strg(va_list list);

#endif
