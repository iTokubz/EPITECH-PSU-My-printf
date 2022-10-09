/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** print the argument
*/

#include "include/my.h"

void recursiv3(float puis10, float nb, int div, int reste)
{
    int test = nb / 0.1;

    div = nb / puis10;
    reste = div % 10;
    puis10 = puis10 * 10;
    if (div >= 10) {
        recursiv3(puis10, nb, div, reste);
    }
    if (div == test)
        my_putchar('.');
    my_putchar(reste + 48);
}

int my_put_float(float nb)
{
    float puis10 = 0.000001;
    int div;
    int reste;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    recursiv3(puis10, nb, div, reste);
}