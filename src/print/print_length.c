/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** print_length
*/

#include "project_one.h"

int print_length(char *str)
{
    int length = my_strlen(str);

    my_putstr("LENGTH : ");
    my_put_nbr(length);
    my_putchar('\n');

    return (length);
}