#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct linkfs - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/

struct linkfs
{
	char *sym;
	int (*f)(va_list);
};

typedef struct linkfs link_fs;

/** functions */

int _printf(const char *format, ...);
int analyst(const char *format, link_fs fs_list[], va_list arg_list);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int unsigned_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);

char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
void write_string(char *str);
int hex_check(int num, char x);

#endif
