/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** count_nb.c
*/

int count_nb(int nb)
{
    if (nb / 10 != 0)
        return (count_nb(nb / 10) + 1);
    else
        return (1);
}
