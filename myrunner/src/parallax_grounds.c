/*
** EPITECH PROJECT, 2021
** parallax
** File description:
** grounds
*/

#include "../include/my.h"

void ground(sfRenderWindow *window, t_animation_t *ground1)
{
    sfTexture *texture_ground = sfTexture_createFromFile
    ("./background/png/bg_01/layers/Ground_01.png", NULL);
    sfSprite *sprite_ground = sfSprite_create();
    sfSprite_setTexture(sprite_ground, texture_ground, sfFalse);
    sfSprite_setPosition(sprite_ground, ground1->pos_ground1);
    sfRenderWindow_drawSprite(window, sprite_ground, NULL);
    sfTexture_destroy(texture_ground);
    sfSprite_destroy(sprite_ground);
}

void ground_2(sfRenderWindow *window, t_animation_t *ground2)
{
    sfTexture *texture_ground2 = sfTexture_createFromFile
    ("./background/png/bg_01/layers/Ground_01.png", NULL);
    sfSprite *sprite_ground2 = sfSprite_create();
    sfSprite_setTexture(sprite_ground2, texture_ground2, sfFalse);
    sfSprite_setPosition (sprite_ground2, ground2->pos_ground2);
    sfRenderWindow_drawSprite(window, sprite_ground2, NULL);
    sfTexture_destroy(texture_ground2);
    sfSprite_destroy(sprite_ground2);
}

void parallax_grounds(sfRenderWindow *window,
t_animation_t *ground1,
t_animation_t *ground2)
{
    ground(window, ground1);
    ground_2(window, ground2);
    if (ground1->pos_ground1.x <= -1920)
        ground1->pos_ground1.x = 1920;
    ground1->pos_ground1.x -= 20;
    if (ground2->pos_ground2.x <= -1920)
        ground2->pos_ground2.x = 1920;
    ground2->pos_ground2.x -= 20;
}