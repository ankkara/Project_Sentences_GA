/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main
*/

#include <stdio.h>
#include "project_one.h"
#include "my_c_library.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (84);
    main_loop(av);
    return (0);
}