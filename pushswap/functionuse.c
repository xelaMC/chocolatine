/*
** EPITECH PROJECT, 2021
** functionuse.c
** File description:
** use
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/struct.h"
#include "include/my.h"

void sa(ctrl_s *ctrl)
{
  int tmp;

  tmp = ctrl->a_begin->data;
  ctrl->a_begin->data = ctrl->a_begin->next->data;
  ctrl->a_begin->next->data = tmp;
  display("sa");
}

void pa(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->b_begin;
  ctrl->b_begin = ctrl->b_begin->next;
  if (ctrl->b_begin)
    ctrl->b_begin->prev = NULL;
  if (ctrl->a_begin) {
    ctrl->a_begin->prev = new;
    new->next = ctrl->a_begin;
    ctrl->a_begin = new;
  } else {
    ctrl->a_begin = new;
    new->prev = NULL;
    new->next = NULL;
    ctrl->a_last = new;
  }
  display("pa");
}

void pb(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->a_begin;
  ctrl->a_begin = ctrl->a_begin->next;
  if (ctrl->a_begin)
    ctrl->a_begin->prev = NULL;
  if (ctrl->b_begin) {
    ctrl->b_begin->prev = new;
    new->next = ctrl->b_begin;
    ctrl->b_begin = new;
  } else {
    ctrl->b_begin = new;
    new->prev = NULL;
    new->next = NULL;
    ctrl->b_last = new;
  }
  display("pb");
}

void rra(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->a_last;
  ctrl->a_last = ctrl->a_last->prev;
  ctrl->a_last->next = NULL;
  ctrl->a_begin->prev = new;
  new->next = ctrl->a_begin;
  ctrl->a_begin = new;
  display("rra");
}

void rrb(ctrl_s *ctrl)
{
  linkedlist_s *new;

  new = ctrl->b_last;
  ctrl->b_last = ctrl->b_last->prev;
  ctrl->b_last->next = NULL;
  ctrl->b_begin->prev = new;
  new->next = ctrl->b_begin;
  ctrl->b_begin = new;
  display("rrb");
}
