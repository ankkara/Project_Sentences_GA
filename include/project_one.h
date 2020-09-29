/*
** EPITECH PROJECT, 2020
** project1.h
** File description:
** include file for project1_ga project
*/

#ifndef PROJECT_ONE_H_
#define PROJECT_ONE_H_

#include "my_c_library.h"

int how_many_uppercase(char *str);
int how_many_num(char *str);
int my_str_count_char(char *str, char c);
int nb_upchar_in_str(char *str, char c);
int how_many_lowercase(char *str);
int how_many_alpha(char *str);
void main_loop(char **av);
void main_print(char *av, int i);
int print_length(char *str);
void print_sentence(char *av, int length);
void print_lower(char *str);
void print_num(char *str);
void print_upper(char *str);

#endif
