/*
** EPITECH PROJECT, 2019
** utils_two
** File description:
** utils_two
*/

#include "include/my.h"
#include <stdarg.h>

void aff_flags_s(va_list list)
{
    flags_s(va_arg(list, char *));
}

void aff_pointer(va_list list)
{
    my_putstr("0x");
    my_convert_to_base_16_x_to_pointer(va_arg(list, long long unsigned int));
}
