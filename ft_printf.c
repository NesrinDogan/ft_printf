// ft_printf.c


#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int print_len = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
            print_len += ft_print_format(format[++i], args);
        
        else
            print_len += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (print_len);
}