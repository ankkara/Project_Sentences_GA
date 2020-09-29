/*
** EPITECH PROJECT, 2020
** my_char_is_num.c
** File description:
** function used to check if the character is a number or not
*/

#include "project_one.h"

int how_many_num(char *str)
{
    int x = 0;
    int y = 0;

    while (str[x] != '\0')
    {
        if (str[x] >= '0' && str[x] <= '9')
            y++;
        x++;
    }
    return (y);
}
