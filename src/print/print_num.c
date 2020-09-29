/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** print_num
*/

#include "project_one.h"

void print_num(char *str)
{
    int num = how_many_num(str);

    my_putstr("\t\t=> there are ");
    my_put_nbr(num);
    my_putstr(" numbers.\n");
}