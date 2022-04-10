/*
** EPITECH PROJECT, 2021
** second.c
** File description:
** Function file 2
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        my_putchar(str[a]);
            a++;
    }
}

void my_putstr_f(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void int_to_hexa_min(int i)
{
    int i_hexa[100];
    int x = 1;
    int y = 0;
    char *hexa = "0123456789abcdef";

    for (; i != 0 ; i_hexa[x++]) {
        i_hexa[x] = i % 16;
        i = i / 16;
    }
    for (y = x - 1 ; y > 0 ; y--)
        my_putchar(hexa[i_hexa[y]]);
}

void int_to_hexa_min_f(va_list ap)
{
    int_to_hexa_min(va_arg(ap, int));
}