/*
** EPITECH PROJECT, 2019
** flags_s
** File description:
** flags_s
*/

#include <stdlib.h>
#include "include/my.h"
#include <stdio.h>
#include <unistd.h>

int check_len(int i, int len)
{
    if (len == 3)
        i += len - 3;
    i += len - 1;
    return (i);
}

void check_len2(int len2)
{
    if (len2 == 1)
        my_putstr("00");
    else if (len2 == 2)
        my_putstr("0");
}

int len_int2(int nb)
{
    int counter = 0;

    while (nb != 0) {
        nb /= 10;
        ++counter;
    }
    return (counter);
}

void flags_s(char *str)
{
    int j = 0; int len; int malloc_size = my_strlen(str);
    char *str_stock = malloc(sizeof(char) * (malloc_size + 1));
    int convert = 0; int p = 0; int len2 = 0; int res = 0;
    for (int i = 0; str[i]; ++i) {
        j = str[i] - 48;
        if ((j < 32) || (j >= 127)) {
            p = i;
            for (int k = 0; (j < 32) || (j >= 127); ++k, ++p) {
                str_stock[k] = str[p];
                j = str_stock[k] - 48;
            } convert = my_getnbr(str_stock);
            len = len_int2(convert);
            my_putchar('\\');
            res = my_convert_to_base_8_2(convert);
            len2 = len_int2(res);
            check_len2(len2);
            my_putnbr(res);
            i = check_len(len, i);
        } else { my_putchar(str[i]); }
    }
}