/*
** EPITECH PROJECT, 2019
** utils_two
** File description:
** two
*/

#include "include/my.h"
#include <stdarg.h>

void aff_hexa_x(va_list list)
{
    my_convert_to_base_16_x(va_arg(list, int));
}

void aff_unsigned_nbr(va_list list)
{
    unsigned_my_putnbr(va_arg(list, unsigned int));
}

void aff_bin(va_list list)
{
    convert_bin(va_arg(list, int));
}

void aff_float(va_list list)
{
    my_put_float(va_arg(list, double));
}

void aff_hexa(va_list list)
{
    my_convert_to_base_16(va_arg(list, int));
}