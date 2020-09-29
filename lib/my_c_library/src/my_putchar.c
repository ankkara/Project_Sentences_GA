/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** function that displays a character
*/

#include "my_c_library.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
