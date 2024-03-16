/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_ls main function
*/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <stdlib.h>
#include <stdarg.h>
#include <dirent.h>
#include "../../include/my.h"
#include <pwd.h>
#include <grp.h>
#include <time.h>

char **noti(char *folder, int nbfiles)
{
    DIR *dir = opendir(folder);
    char **tab = malloc(sizeof(char *) * nbfiles);
    struct dirent *entity;
    int y = 0;

    if (dir == NULL)
        return tab;
    entity = readdir(dir);
    while (entity != NULL) {
        if (entity->d_name[0] != '.') {
            tab[y] = entity->d_name;
            y++;
        }
        entity = readdir(dir);
    }
    closedir(dir);
    tab[y] = NULL;
    return tab;
}
