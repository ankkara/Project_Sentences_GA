/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** print_upper
*/

#include "project_one.h"

void print_upper(char *str)
{
    int num = how_many_uppercase(str);

    my_putstr("\t\t=> there are ");
    my_put_nbr(num);
    my_putstr(" uppercase letters.\n\n");
}