/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** en retard mais tout vas bien
*/

#include <stdio.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

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