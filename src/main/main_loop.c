/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main_loop
*/

#include "project_one.h"
#include <stdio.h>

void main_loop(char **av)
{
    int i = 1;
    int length = 0;

    while (av[i] != NULL)
    {
        main_print(av[i], i);
        length = print_length(av[i]);
        print_sentence(av[i], length);
        print_num(av[i]);
        print_lower(av[i]);
        print_upper(av[i]);
        i++;
    }
}

// /a.out [0] first sentence[[1]

// '\0'(for string) -> NULL (for array)