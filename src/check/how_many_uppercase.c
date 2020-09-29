/*
** EPITECH PROJECT, 2020
** my_char_is_uppercase.c
** File description:
** function used to know if a character is uppercase or not
*/

#include "project_one.h"

int how_many_uppercase(char *str)
{
    int x = 0;
    int y = 0;

    while (str[x] != '\0')
    {
        if (str[x] >= 65 && str[x] <= 90)
            y++;
        x++;
    }
    return (y);
}
