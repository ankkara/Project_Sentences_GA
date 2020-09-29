/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** print_lower
*/

#include "project_one.h"

void print_lower(char *str)
{
    int lower = how_many_lowercase(str);

    my_putstr("\t\t=> there are ");
    my_put_nbr(lower);
    my_putstr(" lowercase letters.\n");
}