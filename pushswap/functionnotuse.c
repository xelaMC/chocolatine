/*
** EPITECH PROJECT, 2021
** functionnotuse.c
** File description:
** not use
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void sb(ctrl_s *ctrl)
{
  int tmp;

  tmp = ctrl->b_begin->data;
  ctrl->b_begin->data = ctrl->b_begin->next->data;
  ctrl->b_begin->next->data = tmp;
  display("sb");
}

void sc(ctrl_s *ctrl)
{
  sa(ctrl);
  sb(ctrl);
  display("sc");
}

void ra(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->a_begin;
  ctrl->a_begin = ctrl->a_begin->next;
  ctrl->a_begin->prev = NULL;
  ctrl->a_last = new;
  ctrl->a_last->next = NULL;
  display("ra");
}

void rb(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->b_begin;
  ctrl->b_begin = ctrl->b_begin->next;
  ctrl->b_begin->prev = NULL;
  ctrl->b_last = new;
  ctrl->b_last->next = NULL;
  display("rb");
}

void rr (ctrl_s *ctrl)
{
  ra(ctrl);
  rb(ctrl);
  display("rr");
}