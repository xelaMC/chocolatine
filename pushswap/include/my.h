/*
** EPITECH PROJECT, 2021
** My.h
** File description:
** Pour les fonctions utilise
*/

#ifndef MY_H_
    #define MY_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

void display(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest , char const *src);
void my_putchar_f(va_list ap);
void my_putnbr_f(va_list ap);
void int_to_binaire(int i);
void int_to_binaire_f(va_list ap);
void int_to_oct(int d);
void int_to_oct_f(va_list ap);
void int_to_hexa(int i);
void int_to_hexa_f(va_list ap);
void my_putstr_f(va_list ap);
void int_to_hexa_min(int i);
void int_to_hexa_min_f(va_list ap);
void pourcentage(char i);
void pourcentage_f(va_list ap);
int my_printf (char const *str, ...);
void sa(ctrl_s *ctrl);
void sb(ctrl_s *ctrl);
void sc(ctrl_s *ctrl);
void pa(ctrl_s *ctrl);
void pb(ctrl_s *ctrl);
void rra(ctrl_s *ctrl);
void rrb(ctrl_s *ctrl);
void ra(ctrl_s *ctrl);
void rb(ctrl_s *ctrl);
void rr(ctrl_s *ctrl);
void push_back(ctrl_s *ctrl, int value);
void push_front(ctrl_s *ctrl, int value, int mode);
void show_list(linkedlist_s *list);
void init_struct(ctrl_s *ctrl, linkedlist_s *list_a, linkedlist_s *list_b);
void add_in_list(ctrl_s *ctrl, linkedlist_s *list_a, int ac, char **av);
int search_min(ctrl_s *ctrl);
void algo (int ac, linkedlist_s *list_a, linkedlist_s *list_b, ctrl_s *ctrl);
int main(int ac, char **av);

#endif
