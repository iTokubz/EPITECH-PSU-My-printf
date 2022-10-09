/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr
*/

#include "include/my.h"

int what_nbr(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int result = 0;
    int i = 0;
    int neg = 0;

    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
            ++neg;
        ++i;
    }
    for (; str[i] != '\0' && what_nbr(str[i]); ++i)
        result = (result * 10) + (str[i] - '0');
    if (neg % 2 == 1)
        result *= -1;
    return (result);
}