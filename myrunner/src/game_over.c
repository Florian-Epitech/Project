/*
** EPITECH PROJECT, 2021
** menu
** File description:
** menu
*/

#include "../include/my.h"

void image_game_over(sfRenderWindow *window)
{
    sfTexture *texture_forest = sfTexture_createFromFile("./background/"
    "game_over.png", NULL);
    sfSprite *sprite_forest = sfSprite_create();
    sfVector2f pos_game_over = {600, 350};
    sfVector2f scale_game_over = {0.5, 0.5};
    sfSprite_setPosition(sprite_forest, pos_game_over);
    sfSprite_setScale(sprite_forest, scale_game_over);
    sfSprite_setTexture(sprite_forest, texture_forest, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_forest, NULL);
}

void background_game_over(sfRenderWindow *window)
{
    sfTexture *texture_forest = sfTexture_createFromFile("./background/"
    "forest_back.jpg", NULL);
    sfSprite *sprite_forest = sfSprite_create();
    sfSprite_setTexture(sprite_forest, texture_forest, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_forest, NULL);
}

void game_over(t_animation_t *animation)
{   
    if ((animation->pos_character_animation.x == animation->pos_block1.x) && ((animation->pos_character_animation.y - 110 < animation->pos_block1.y) &&(animation->pos_character_animation.y + 110 > animation->pos_block1.y))) {
        animation->over_blocked = 1;
    }
    if ((animation->pos_character_animation.x == animation->pos_block2.x) && ((animation->pos_character_animation.y - 110 < animation->pos_block2.y) &&(animation->pos_character_animation.y + 110 > animation->pos_block2.y))) {
        animation->over_blocked = 1;
    }
    if ((animation->pos_character_animation.x == animation->pos_block3.x) && ((animation->pos_character_animation.y - 110 < animation->pos_block3.y) &&(animation->pos_character_animation.y + 110 > animation->pos_block3.y))) {
        animation->over_blocked = 1;
    }
}

void press_escape(sfRenderWindow *window)
{
    sfText *text;
    sfFont *font;
    sfVector2f position = {600, 800};
    font = sfFont_createFromFile("./font/SuperMario256.ttf");
    text = sfText_create();
    sfText_setPosition(text, position);
    sfText_setColor(text, sfWhite);
    sfText_setString(text, "Press escape to leave");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfRenderWindow_drawText(window, text, NULL);
}