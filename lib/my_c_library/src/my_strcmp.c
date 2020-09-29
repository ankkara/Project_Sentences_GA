/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_strcmp
*/

#include "my_c_library.h"

int my_strcmp(char *strone, char *strtwo)
{
    int x = 0;
    int lengthone = my_strlen(strone);
    int lengthtwo = my_strlen(strtwo);

    if (lengthone != lengthtwo)
        return (0);
    while (strone[x] != '\0')
    {
        if (strone[x] != strtwo[x])
            return (0);
        x++;
    }
    return (1);
}
