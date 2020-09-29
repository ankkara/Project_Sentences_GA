/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main_print
*/

#include "project_one.h"

void main_print(char *av, int i)
{
    my_putstr("SENTENCE nº ");
    my_put_nbr(i);
    my_putstr(" : ");
    my_putchar('"');
    my_putstr(av);
    my_putchar('"');
    my_putchar('\n');
}