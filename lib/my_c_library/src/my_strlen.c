/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** function used to get the size of a string
*/

#include "my_c_library.h"

int my_strlen(char *str)
{
    int x = 0;

    while (str[x] != '\0')
    {
        x++;
    }
    return (x);
}
