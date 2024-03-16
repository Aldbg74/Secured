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

char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer[1];
    int nbchar_in_file = 0;
    char *str;
    int i = 0;

    if (fd == -1)
        return 0;
    while (read(fd, buffer, 1) > 0)
        nbchar_in_file++;
    close(fd);
    str = malloc(sizeof(char) * (nbchar_in_file + 1));
    fd = open(filepath, O_RDONLY);
    read(fd, str, nbchar_in_file);
    str[nbchar_in_file] = '\0';
    close(fd);
    return str;
}
