/*
** EPITECH PROJECT, 2019
** base_convert
** File description:
** convert
*/

void my_putchar(char c);
int my_strlen(char const *str);

int my_base(int nbr, char *base)
{
    int pr;
    int deb;
    int size = my_strlen(base);
    int nb = 0;

    if (nbr < 0) {
        my_putchar('-');
        nb = -nb;
        nbr += my_base(-nbr, base);
    } else {
        pr = nbr % size;
        deb = (nbr - pr) / size;
        if (deb != 0)
            my_base(deb, base);
        my_putchar(base[pr]);
    }
    return (nb);
}