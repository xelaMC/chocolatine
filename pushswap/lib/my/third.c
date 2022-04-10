/*
** EPITECH PROJECT, 2021
** third.c
** File description:
** Function file 3
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

void int_to_hexa(int i)
{
    int i_hexa[100];
    int x = 1;
    int y = 0;
    char *hexa = "0123456789ABCDEF";

    for (; i != 0 ; i_hexa[x++]) {
        i_hexa[x] = i % 16;
        i = i / 16;
    }
    for (y = x - 1 ; y > 0 ; y--)
        my_putchar(hexa[i_hexa[y]]);
}

void int_to_hexa_f(va_list ap)
{
    int_to_hexa(va_arg(ap, int));
}

void pourcentage(char i)
{
    my_putchar('%');
}

void pourcentage_f(va_list ap)
{
    pourcentage(va_arg(ap, char));
}
