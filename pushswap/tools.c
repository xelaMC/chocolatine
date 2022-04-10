/*
** EPITECH PROJECT, 2021
** tools.c
** File description:
** back and front
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void add_in_list(ctrl_s *ctrl, linkedlist_s *list_a, int ac, char **av)
{
  for (int i = 1; i < ac; i++) {
    push_back(ctrl, my_getnbr(av[i]));
  }
}