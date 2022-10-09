/*
** EPITECH PROJECT, 2019
** utils
** File description:
** utils
*/

#include "include/my.h"
#include <stdarg.h>

void aff_string(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void aff_char(va_list list)
{
    my_putchar(va_arg(list, int));
}

void aff_int(va_list list)
{
    my_putnbr(va_arg(list, int));
}

void aff_percent(va_list list)
{
    my_putchar('%');
}

void aff_octal(va_list list)
{
    my_convert_to_base_8(va_arg(list, int));
}