/*
** EPITECH PROJECT, 2021
** list.h
** File description:
** Structure trop chiante
*/

#ifndef MY_H_
    #define MY_H_

typedef struct linkedlist_t
{
  struct linkedlist_t *prev;
  struct linkedlist_t *next;
  int data;
} linkedlist_s;

typedef struct ctrl_t
{
  linkedlist_s *a_begin;
  linkedlist_s *a_last;
  linkedlist_s *b_begin;
  linkedlist_s *b_last;
  int min;
} ctrl_s;

#endif