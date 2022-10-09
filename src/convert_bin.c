/*
** EPITECH PROJECT, 2019
** test
** File description:
** gzegver
*/
#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

void convert_bin(int nb)
{
    int calcint = nb;
    int stock;
    char *str_res;
    int count_int = 0;
    int i = 0;

    for (; calcint != 0; ++count_int)
        calcint /=2;

    str_res = malloc(sizeof(char) * (count_int + 1));

    while (count_int > 0) {
        stock = nb;
        nb /= 2;
        stock %= 2;
        str_res[i] = stock + 48;
        ++i;
        --count_int;
    } str_res[i +1] = nb + 48;
    my_revstr(str_res);
    my_putstr(str_res);
}
