/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-mathis.quenardel
** File description:
** free_tab.c
*/

#include <stdlib.h>

void free_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    }
    free(tab[i]);
    free(tab);
}
