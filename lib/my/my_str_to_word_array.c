/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-mathis.quenardel
** File description:
** evil
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int isalphanumeric(char letter)
{
    if (letter >= '0' && letter <= '9' || letter >= 'a' && letter <= 'z'
    || letter >= 'A' && letter <= 'Z')
        return 1;
    else
        return 0;
}

int count_words_in_string(char const *str)
{
    int skip = 0;
    int n = 0;

    if (isalphanumeric(str[0]) == 1) {
        n++;
    }
    for (int k = 0; str[k] != '\0'; k++) {
        if (isalphanumeric(str[k]) == 0
        && isalphanumeric(str[k + 1]) == 1) {
            n++;
        }
    }
    return n;
}

void increment(int *ptrx, int *ptri)
{
    (*ptrx)++;
    (*ptri)++;
}

char **my_str_to_word_array(char const *str)
{
    int nb = count_words_in_string(str);
    char **tab = malloc(sizeof(char *) * (nb + 1));
    int i = 0;
    int x = 0;
    int y = 0;

    while (str[i] != '\0') {
        tab[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (isalphanumeric(str[i]) == 0)
            i += 1;
        x = 0;
        while (str[i] != '\0' && isalphanumeric(str[i]) == 1) {
            tab[y][x] = str[i];
            increment(&x, &i);
        }
        y++;
        i++;
    }
    tab[y] = 0;
    return (tab);
}
