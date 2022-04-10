/*
** EPITECH PROJECT, 2021
** fourth.c
** File description:
** Function file 4
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

void int_to_binaire(int i)
{
    int i_bin[100];
    int x = 1;
    int y = 0;

    for (; i != 0 ; i_bin[x++]) {
        i_bin[x] = i % 2;
        i = i / 2;
    }
    for (y = x - 1 ; y > 0 ; y--)
        my_put_nbr(i_bin[y]);
}

void int_to_binaire_f(va_list ap)
{
    int_to_binaire(va_arg(ap, int));
}

void int_to_oct(int d)
{
    int oct = 0;
    int tmp = 1;

    while (d != 0)
    {
        oct = oct + (d % 8) * tmp;
        d = d / 8;
        tmp = tmp * 10;
    }
    my_put_nbr(oct);
}

void int_to_oct_f(va_list ap)
{
    int_to_oct(va_arg(ap, int));
}