/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_putnbr(int nb);
void my_convert_to_base_8(int nb);
char *my_revstr(char *str);
int my_getnbr(char const *str);
int unsigned_my_putnbr(unsigned int);
void convert_bin(int nb);
int my_put_float(float nb);
void flags_s(char *str);
void aff_flags_s(va_list);
void aff_string(va_list);
void aff_char(va_list);
void aff_int(va_list);
void aff_percent(va_list);
void aff_octal(va_list);
void aff_unsigned_nbr(va_list);
void aff_bin(va_list);
void aff_float(va_list);
void aff_hexa(va_list);
void aff_hexa_x(va_list);
char *my_convert_to_base_16(int nb);
char *my_convert_to_base_16_x(int nb);
char *my_convert_to_base_16_x_to_pointer(long long unsigned int nb);
int my_base(int nbr, char *base);
int my_convert_to_base_8_2(int nb);
void aff_pointer(va_list);



#endif //MY_H
