/*
** EPITECH PROJECT, 2023
** randomname.c
** File description:
** put nbr
*/

#include <unistd.h>
#include "../../include/my.h"

static int writenumber(int nbr)
{
    int n;

    if (nbr < 10) {
        my_putchar(nbr + 48);
        return (0);
    }
    n = nbr % 10;
    writenumber(nbr / 10);
    my_putchar(n + 48);
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 10);
    if (nb == 2147483648)
        write(1, "2147483648", 9);
    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
        writenumber(nb);
    } else
        writenumber(nb);
}
