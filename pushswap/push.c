/*
** EPITECH PROJECT, 2021
** push.c
** File description:
** back and front
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void push_front(ctrl_s *ctrl, int value, int mode)
{
  linkedlist_s *new = malloc(sizeof(linkedlist_s));

  new->data = value;
  if (mode == 0) {
    new->next = ctrl->a_begin;
    if (!ctrl->a_begin)
      ctrl->a_last = new;
    ctrl->a_begin = new;
  }
  else {
    new->next = ctrl->b_begin;
    if (!ctrl->b_begin)
      ctrl->b_last = new;
    ctrl->b_begin = new;
  }
}

void push_back(ctrl_s *ctrl, int value)
{
  linkedlist_s *new = malloc(sizeof(linkedlist_s));
  linkedlist_s *tmp;

  new->data = value;
  new->prev = NULL;
  new->next = NULL;
  if (!ctrl->a_begin) {
    ctrl->a_begin = new;
    ctrl->a_last = new;
  }
  else {
    tmp = ctrl->a_begin;
    while (tmp->next)
      tmp = tmp->next;
    tmp->next = new;
    new->prev = tmp;
    ctrl->a_last = new;
  }
}