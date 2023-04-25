#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
        va_list args;
        int printed_chars = 0;
        char buffer[1024];

        va_start(args, format);
        printed_chars = vsprintf(buffer, format, args);
        va_end(args);

        if (printed_chars < 0)
                return (-1);

        if (write(1, buffer, printed_chars) != printed_chars)
                return (-1);

        return (printed_chars);
}
