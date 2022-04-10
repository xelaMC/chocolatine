/*
** EPITECH PROJECT, 2021
** show.c
** File description:
** show all
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void show_list(linkedlist_s *list)
{
  linkedlist_s *tmp;

  tmp = list;
  for (int i = 1 ; tmp; i++, tmp = tmp->next)
    my_printf("\n[%d]  : %d\n", i - 1, tmp->data);
}

void display(char *str)
{
  static int flag = 0;

  if (flag)
    my_printf(" ");
  flag = 1;
  my_printf(str);
}