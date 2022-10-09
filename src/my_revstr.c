/*
** EPITECH PROJECT, 2019
** revstr
** File description:
** third task
*/

int my_strlen2(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_revstr(char *str)
{

    char temp;
    char i = 0;
    char j = my_strlen2(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

