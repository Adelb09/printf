#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int printed_chars;

va_start(args, format);
printed_chars = vprintf(format, args);
va_end(args);

return printed_chars;
}
