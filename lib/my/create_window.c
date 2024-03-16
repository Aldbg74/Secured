/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-mathis.quenardel
** File description:
** create_window.c
*/

#include <SFML/Graphics.h>

sfRenderWindow *cr_renderwind(unsigned int hor, unsigned int ver,
    unsigned int idk, char *title)
{
    sfVideoMode video_mode = {hor, ver, idk};

    return sfRenderWindow_create(video_mode, title, sfClose | sfResize, NULL);
}
