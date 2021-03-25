/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** hunter
*/

#include "my.h"

void duck_moves(t_rect_t *rect)
{
    rect->time = sfClock_getElapsedTime(rect->clock);
    rect->seconds = rect->time.microseconds / 1000000.0;

    if (rect->seconds < 0.10) {
        rect->rect.left = 0;
    }
    if (rect->seconds > 0.20) {
        rect->rect.left = 110;
    }
    if (rect->seconds > 0.30) {
        rect->rect.left = 220;
    }
    if (rect->seconds > 0.40) {
        rect->rect.left = 110;
    }
    if (rect->seconds > 0.50) {
        sfClock_restart(rect->clock);
    }
}

void duck(sfRenderWindow *window, t_rect_t *rect)
{
    rect->my_texture2 = sfTexture_createFromFile("./src/duck.png", NULL);
    rect->my_sprite2 = sfSprite_create();
    sfVector2f scale2 = {1, 1};
    sfSprite_setScale(rect->my_sprite2, scale2);
    sfSprite_setTexture(rect->my_sprite2, rect->my_texture2, sfFalse);
    sfSprite_setTextureRect(rect->my_sprite2, rect->rect);
    sfSprite_setPosition(rect->my_sprite2, rect->pos);
    sfRenderWindow_drawSprite(window, rect->my_sprite2, NULL);

    
}

static sfRenderWindow *create_renderwindow(unsigned int x, unsigned y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};

    return (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}

void move_rect(t_rect_t *rect)
{
    rect->x = 0;
    rect->rect.top = 0;
    rect->rect.left = 0;
    rect->rect.width = 110;
    rect->rect.height = 110;
}

void renderwindow(sfRenderWindow *window)
{
    sfEvent event;
    t_rect_t rect;
    rect.clock = sfClock_create();
    music(&rect);
    

    window = create_renderwindow(1920, 1080, 32, "My_Hunter");
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        sfRenderWindow_setFramerateLimit(window, 60);
        background(window, &rect);
        duck(window, &rect);
        move_rect(&rect);
        duck_moves(&rect);
        hearth(window, &rect);
            while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
            if (event.key.code == sfKeyEscape) {
                sfRenderWindow_close(window);
            }
        }
    }
    sfMusic_stop;
    destroy(&rect);
}