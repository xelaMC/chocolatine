/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** J'ai mis 2 heures a faire cet task
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        my_putchar(str[a]);
            a++;
    }
}

