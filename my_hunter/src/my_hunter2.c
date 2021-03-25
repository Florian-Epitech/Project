/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** hunter
*/

#include "my.h"

void background(sfRenderWindow *window, t_rect_t *rect)
{
    rect->my_texture = sfTexture_createFromFile("./src/back.jpg", NULL);
    rect->my_sprite = sfSprite_create();
    sfVector2f scale = {1, 1};

    sfSprite_setScale(rect->my_sprite, scale);
    sfSprite_setTexture(rect->my_sprite, rect->my_texture, sfFalse);
    sfRenderWindow_drawSprite(window, rect->my_sprite, NULL);
}

int music(t_rect_t *rect)
{
    rect->music = sfMusic_createFromFile("./src/music.ogg");
    sfMusic_setVolume(rect->music, 1);
    sfMusic_play(rect->music);
    sfMusic_setLoop(rect->music, sfTrue);
    return (0);
}

void destroy(t_rect_t *rect)
{
    sfMusic_destroy (rect->music);
    sfTexture_destroy(rect->my_texture);
    sfTexture_destroy(rect->my_texture2);
    sfSprite_destroy(rect->my_sprite);
    sfSprite_destroy(rect->my_sprite2);
}

void hearth(sfRenderWindow *window, t_rect_t *rect)
{
    sfSprite *my_sprite3;
    rect->my_texture3 = sfTexture_createFromFile("./src/hearth.png", NULL);
    my_sprite3 = sfSprite_create();
    sfVector2f scale = {0.5, 0.5};
    sfVector2f posh = {0, 903};
    sfIntRect rect2;
    rect2.top = 0;
    rect2.left = 0;
    rect2.width = 177;
    rect2.height = 177;

    sfSprite_setScale(my_sprite3, scale);
    sfSprite_setTexture(my_sprite3, rect->my_texture3, sfFalse);
    sfSprite_setTextureRect(my_sprite3, rect2);
    sfSprite_setPosition(my_sprite3, posh);
    sfRenderWindow_drawSprite(window, my_sprite3, NULL);

    if (rect->pos.x >= 1920 || sfMouse_isButtonPressed(sfMouseLeft)) {
        rect->pos.x = 0;
        rect->pos.y = rand() % 255;
        rect->pos.y = rand() % 600;
        animation(&rect2, 177, 777, my_sprite3);
        rect->pos.x = -120;
    }
    rect->pos.x += 10;
}

void animation(sfIntRect *rect, int offset, int max_value, sfSprite *my_sprite)
{
    rect->left = offset;
    if (rect->left == max_value) {
        rect->left == 0;
    }
     sfSprite_setTextureRect(my_sprite, *rect);
}

