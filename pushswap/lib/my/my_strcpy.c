/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** Je pense avoir compris
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0 ; i != my_strlen(src) ; i++)
        dest[i] = src[i];
    return (dest);
}
