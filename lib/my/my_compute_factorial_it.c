/*
** EPITECH PROJECT, 2023
** my_compute_factorial.c
** File description:
** my_compute_factorial.c test 01
*/

#include <unistd.h>
int my_compute_factorial_it(int nb)
{
    int nbfinal2 = 1;

    if (nb < 0 || nb > 12) {
        return 0;
    }
    for (int i = 1; i <= nb; i++) {
        nbfinal2 *= i;
    }
    return nbfinal2;
}
