/*
** EPITECH PROJECT, 2019
** convert_b16
** File description:
** convert_b16
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int str_len_int(int nb)
{
    int counter = 0;

    while (nb > 0) {
        nb /= 10;
        ++counter;
    }
    return (counter);
}

char *my_convert_to_base_16(int nb)
{
    int stock = 0; int temp = 0; int malloc_len = str_len_int(nb);
    int i = 0; int stock_nb = 0;
    char *str_res = malloc(sizeof(char) * (malloc_len + 1));
    char hexa[] = "ABCDEF";

    for (; nb > 16; ++i) {
        stock = nb / 16;
        temp = nb - (stock * 16);
        if (temp > 9) {
            temp = temp % 10;
            str_res[i] = hexa[temp];
        } else { str_res[i] = temp + 48;
        } nb /= 16;
    }
    if (nb > 9) {
        stock_nb = nb % 10;
        str_res[i] = hexa[stock_nb];
    } else { str_res[i] = nb + 48;
    }

    my_revstr(str_res);
    my_putstr(str_res);
}
