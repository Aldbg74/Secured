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
#include <stdio.h>

int split(char c, int so)
{
    if (c != '.') {
        return 0;
    }
    return so;
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int so = 1;

    for (int i = row; map[i] != NULL && i < row + square_size; i++) {
        if (map[i][col] != '.') {
            return 0;
        }
        for (int j = col; map[i][j] != '\0' && j < col + square_size; j++) {
            so = split(map[i][j], so);
        }
    }
    return so;
}
// int main(int ac, char **av)
// {
//     if (ac != 2)
//         exit(84);
//     char **map = load_2d_arr_from_file(av[1]);
//     int test = is_square_of_size(map, 1, 5, 2);
//     mini_printf("Is there a square ? [1/0] -> %d\n", test);
//     free(map);
//     return 0;
// }
