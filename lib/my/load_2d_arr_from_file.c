/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** bs_setting_up.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "../../include/my.h"
#include "../../include/mylist.h"
#include <fcntl.h>

int is_a_line(char letter)
{
    if (letter != '\n')
        return 1;
    else
        return 0;
}

int count_lines_in_file(char const *filecont)
{
    int skip = 0;
    int n = 0;

    if (is_a_line(filecont[0]) == 1) {
        n++;
    }
    for (int k = 0; filecont[k] != '\0'; k++) {
        if (is_a_line(filecont[k]) == 0
        && is_a_line(filecont[k + 1]) == 1) {
            n++;
        }
    }
    return n;
}

void incremente(int *ptrx, int *ptri)
{
    (*ptrx)++;
    (*ptri)++;
}

static void incrementev2(char *a, char *b, int *c)
{
    (*a) = '\n';
    (*b) = '\0';
    (*c)++;
}

char **load_2d_arr_from_file(char const *filepath)
{
    char *str = load_file_in_mem(filepath);
    char **tab = malloc(sizeof(char *) * (count_lines_in_file(str) + 1));
    int i = 0;
    int x = 0;
    int y = 0;

    while (str[i] != '\0') {
        tab[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (is_a_line(str[i]) == 0)
            i++;
        x = 0;
        while (str[i] != '\0' && is_a_line(str[i]) == 1) {
            tab[y][x] = str[i];
            incremente(&x, &i);
        }
        incrementev2(&tab[y][x], &tab[y][x + 1], &y);
    }
    tab[y] = NULL;
    free(str);
    return (tab);
}
