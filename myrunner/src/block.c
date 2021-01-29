/*
** EPITECH PROJECT, 2020
** block
** File description:
** the block
*/

#include "../include/my.h"

void block_1(sfRenderWindow *window,
t_animation_t *block_sprite)
{
    sfTexture *texture_block1 = sfTexture_createFromFile
    ("./sprite/Cube001.png", NULL);
    sfSprite *sprite_block1 = sfSprite_create();
    sfVector2f scale = {0.25, 0.25};
    sfSprite_setScale(sprite_block1, scale);
    sfSprite_setTexture(sprite_block1,
    texture_block1, sfFalse);
    sfSprite_setPosition (sprite_block1,
    block_sprite->pos_block1);
    sfRenderWindow_drawSprite(window,
    sprite_block1, NULL);
    sfTexture_destroy(texture_block1);
    sfSprite_destroy(sprite_block1);
}

void block_2(sfRenderWindow *window,
t_animation_t *block2_sprite)
{
    sfTexture *texture_block2 = sfTexture_createFromFile
    ("./sprite/Cube016.png", NULL);
    sfSprite *sprite_block2 = sfSprite_create();
    sfVector2f scale = {0.25, 0.25};
    sfSprite_setScale(sprite_block2, scale);
    sfSprite_setTexture(sprite_block2,
    texture_block2, sfFalse);
    sfSprite_setPosition (sprite_block2, block2_sprite->pos_block2);
    sfRenderWindow_drawSprite(window, sprite_block2, NULL);
    sfSprite_destroy(sprite_block2);
    sfTexture_destroy(texture_block2);
}

void block_3(sfRenderWindow *window,
t_animation_t *block3_sprite)
{
    sfTexture *texture_block3 = sfTexture_createFromFile
    ("./sprite/Cube029.png", NULL);
    sfSprite *sprite_block3 = sfSprite_create();
    sfVector2f scale = {0.25, 0.25};
    sfSprite_setScale(sprite_block3, scale);
    sfSprite_setTexture(sprite_block3,
    texture_block3, sfFalse);
    sfSprite_setPosition (sprite_block3,
    block3_sprite->pos_block3);
    sfRenderWindow_drawSprite(window,
    sprite_block3, NULL);
    sfSprite_destroy(sprite_block3);
    sfTexture_destroy(texture_block3);
}

void parallax_blocks(sfRenderWindow *window,
t_animation_t *block_sprite,
t_animation_t *block2_sprite,
t_animation_t *block3_sprite)
{
    block_1(window, block_sprite);
    block_2(window, block2_sprite);
    block_3(window, block3_sprite);
    if (block_sprite->pos_block1.x <= -310)
        block_sprite->pos_block1.x = 1920;
    block_sprite->pos_block1.x -= 30;
    if (block2_sprite->pos_block2.x <= -310)
        block2_sprite->pos_block2.x = 1920;
    block2_sprite->pos_block2.x -= 30;
    if (block3_sprite->pos_block3.x <= -310)
        block3_sprite->pos_block3.x = 1920;
    block3_sprite->pos_block3.x -= 30;
}