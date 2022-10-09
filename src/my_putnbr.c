/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** print the argument
*/

#include "include/my.h"

void recursiv(int puis10, int nb, int div, int reste)
{
    div = nb / puis10;
    reste = div%10;
    puis10 = puis10 * 10;
    if (div >= 10) {
        recursiv(puis10, nb, div, reste);
    }
    my_putchar(reste + 48);
}

int my_putnbr(int nb)
{
    int puis10 = 1;
    int div;
    int reste;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    recursiv(puis10, nb, div, reste);
}
