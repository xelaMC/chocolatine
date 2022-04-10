/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** c'est partie
*/

#include "../../include/my.h"

char *my_strcat(char *dest , char const *src)
{
    int i = 0;
    int j = 0 ;
    int count1 = 0;
    int count2 = 0;
    int result;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        count2 = count2 + src[j];
        j++;
    }
    result = count1 + count2;
    return (0);
}
