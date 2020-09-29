/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** print_sentence
*/

#include "project_one.h"

void print_sentence(char *av, int length)
{
    int alpha = how_many_alpha(av);
    int resta = length - alpha;

    my_putstr("\tIn this sentence there are ");
    my_put_nbr(alpha);
    my_putstr(" alphanumeric characters and ");
    my_put_nbr(resta);
    my_putstr(" is not alphanumeric characters.\n");
}