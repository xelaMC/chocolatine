/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** for printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar_f (va_list ap)
{
    my_putchar(va_arg(ap, char *));
}
