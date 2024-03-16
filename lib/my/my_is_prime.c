/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** my_is_prime.c test 01
*/

#include <unistd.h>
#include <stdio.h>
/*int my_compute_square_root2(int nb2)
{
    int res = 0;

    if (nb2 == 0 || nb2 < 0) {
        return 0;
    }
    while (res * res != nb2) {
        res++;
    }
    return res;
}
*/

int my_is_prime(int nb)
{
    int isprime = 0;

    if (nb == 0 || nb == 1) {
        isprime = 0;
    }
    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0) {
        printf("%d", isprime);
        return 0;
    } else {
        printf("%d", isprime);
        return 1;
    }
}
