/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_char_is_alpha
*/

int how_many_alpha(char *str)
{
    int x = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            x++;
        i++;
    }
    return (x);
}