/*
** EPITECH PROJECT, 2019
** convert
** File description:
** convert
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char *first_step2(char *str_res, int nb, int multiplicateur, int stock)
{
    int i = 0;
    stock = nb / multiplicateur;
    str_res[i] = stock + 48;
    ++i;
    return (str_res);
}

char *my_malloc2(char *str_res, int count_int)
{
    str_res = malloc(sizeof(char) * (count_int + 1));
    for (int k = 0; k < count_int; ++k)
        str_res[k] = '\0';
    return (str_res);
}

int multip2(int multiplicateur, int nb)
{
    while (multiplicateur <= nb) {
        multiplicateur *= 8;
    }
    return (multiplicateur);
}

int len_int3(int calcmult)
{
    int counter = 0;
    while (calcmult != 0) {
        calcmult /= 10;
        ++counter;
    }
    return (counter);
}

void my_convert_to_base_8(int nb)
{
    int result; int reste; int count_int = 0; int multiplicateur = 1; int stock;
    char *str_res; int i = 1;
    multiplicateur = multip2(multiplicateur, nb);
    count_int = len_int3(multiplicateur);
    str_res = my_malloc2(str_res, count_int);
    multiplicateur /= 8;
    str_res = first_step2(str_res, nb, multiplicateur, stock);
    while (count_int - 1 > 0) {
        stock = 0;
        reste = nb % multiplicateur;
        multiplicateur /= 8;
        if (multiplicateur == 0)
            multiplicateur = 1;
        stock = reste / multiplicateur;
        str_res[i] = stock + 48;
        --count_int;
        ++i;
    } result = my_getnbr(str_res);
    my_putnbr(result);
}

