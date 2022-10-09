/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** building my_printf
*/

#include "include/my.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

void manage_flags(int i, char *str, va_list list)
{

    void (*fonction[])(va_list) = { aff_string, aff_char, aff_int,
        aff_int, aff_percent, aff_octal, aff_unsigned_nbr, aff_bin,
        aff_float, aff_hexa, aff_hexa_x, aff_flags_s, aff_pointer};
    char str_flags[] = {'s', 'c', 'd', 'i', '%', 'o', 'u', 'b',
        'f', 'X', 'x', 'S', 'p'};
    for (int k = 0; k < 13; ++k) {
        if (str_flags[k] == str[i])
            fonction[k](list);
    }
}

void my_printf(char *str, ...)
{
    va_list(list);

    va_start(list, str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '%') {
            ++i;
            manage_flags(i, str, list);
        }
        else { my_putchar(str[i]);
        }
    }
}