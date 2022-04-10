/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Good
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void init_struct (ctrl_s *ctrl, linkedlist_s *list_a, linkedlist_s *list_b)
{
  ctrl->a_begin = NULL;
  ctrl->b_begin = NULL;
}

int search_min(ctrl_s *ctrl)
{
  linkedlist_s *tmp;
  int min;

  tmp = ctrl->a_begin;
  min = tmp->data;
  while (tmp) {
    if (min > tmp->data) {
      min = tmp->data;
    }
    tmp = tmp->next;
  }
  return(min);
}

void algo (int ac, linkedlist_s *list_a, linkedlist_s *list_b, ctrl_s *ctrl)
{
  if (ctrl->a_begin == NULL) {
    return(0);
  }

  while (ctrl->a_begin && ctrl->a_begin->next != NULL) {
    int min = search_min(ctrl);
    while (ctrl->a_begin->next && ctrl->a_begin->data != min)
      rra(ctrl);
    pb(ctrl);
  }
  pb(ctrl);
}

int main(int ac, char **av)
{
  linkedlist_s *list_a = malloc(sizeof(linkedlist_s));
  linkedlist_s *tmp;
  linkedlist_s *list_b = malloc(sizeof(linkedlist_s));
  ctrl_s *ctrl = malloc(sizeof(ctrl_s));

  init_struct(ctrl, list_a, list_b);
  add_in_list(ctrl, list_a, ac, av);
  algo(ac, list_a, list_b, ctrl);
  for (int i = 1; i < ac; i++) {
   pa(ctrl);
   }
  for (int i = 1; i < ac; i++) {
    rra(ctrl);
  }
  my_printf("\n");
}