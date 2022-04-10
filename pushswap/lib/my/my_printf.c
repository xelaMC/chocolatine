/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** okay
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

void flag(int i, char const *str, va_list ap)
{
    char *flags = "discoXxb%";
    int e = 0;
    void (*put[9])(va_list) = {my_putnbr_f, my_putnbr_f, my_putstr_f,
    my_putchar_f, int_to_oct_f, int_to_hexa_f, int_to_hexa_min_f,
     int_to_binaire_f, pourcentage_f};
    for ( ; str[i] != flags[e] ; e++) {
        if (flags[e] == '\0')
            return(84);
    }
    (*put[e])(ap);
}

int my_printf (char const *str, ...)
{
    va_list ap;
    int i = 0;
    va_start (ap, str);

    while (str[i] != '\0') {
        if (str[i] == '%') {
            flag(i + 1, str, ap);
            i++;
        }
        else if (str[i] != '%')
            my_putchar(str[i]);
        i++;
    }
    va_end (ap);
}
