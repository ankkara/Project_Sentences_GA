/*
** EPITECH PROJECT, 2020
** MP_c_coaching
** File description:
** my_put_nbr
*/

#include "my_c_library.h"

void my_put_nbr(int nb)
{
    int num = 0;

    if (nb < 0)
    {
        my_putchar('-');
        num = nb * -1;
    }
    else
        num = nb;
    if (num <= 9)
        my_putchar(num + 48);
    else
    {
        my_put_nbr(num / 10);
        my_put_nbr(num % 10);
    }
}
