/*
** EPITECH PROJECT, 2021
** my_putnbr.c
** File description:
** Function file 1
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int pow;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        pow = nb % 10;
        nb /= 10;
        my_put_nbr(nb);
        my_putchar(pow + 48);
    } else
        my_putchar(nb + 48);
}

void my_putnbr_f(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

