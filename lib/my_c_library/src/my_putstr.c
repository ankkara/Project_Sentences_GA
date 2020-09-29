/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** function used to display a string
*/

#include "my_c_library.h"

void my_putstr(char *str)
{
    int x = 0;

    while (str[x] != '\0')
    {
        my_putchar(str[x]);
        x++;
    }
}