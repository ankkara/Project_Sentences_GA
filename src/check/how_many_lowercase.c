/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_char_is_uppercase
*/

#include "project_one.h"

int how_many_lowercase(char *str)
{
    int x = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            x++;
        i++;
    }
    return (x);
}