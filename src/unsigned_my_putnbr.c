/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** print the argument
*/

#include "include/my.h"

void recursiv2(unsigned int puis10, unsigned int nb, unsigned int div,
unsigned int reste)
{
    div = nb / puis10;
    reste = div%10;
    puis10 = puis10 * 10;
    if (div >= 10) {
        recursiv2(puis10, nb, div, reste);
    }
    my_putchar(reste + 48);
}

int unsigned_my_putnbr(unsigned int nb)
{
    int puis10 = 1;
    int div;
    int reste;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    recursiv2(puis10, nb, div, reste);
}
