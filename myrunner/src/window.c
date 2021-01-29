/*
** EPITECH PROJECT, 2020
** render
** File description:
** window
*/

#include "../include/my.h"

sfRenderWindow *_window(void)
{
    sfRenderWindow *create_renderwindow;
    sfVideoMode mode = {1920, 1080, 32};
    create_renderwindow = sfRenderWindow_create
    (mode, "MyRunner", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(create_renderwindow, 60);
    sfRenderWindow_display(create_renderwindow);

    return (create_renderwindow);
}