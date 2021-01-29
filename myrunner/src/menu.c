/*
** EPITECH PROJECT, 2021
** menu
** File description:
** menu
*/

#include "../include/my.h"

void button_menu(sfRenderWindow *window)
{
    sfTexture *texture_play = sfTexture_createFromFile("./sprite/play_button."
    "png", NULL);
    sfSprite *sprite_play = sfSprite_create();
    sfVector2f position_play = {800, 540};
    sfVector2f scale_play =  {1, 1};
    sfSprite_setPosition(sprite_play, position_play);
    sfSprite_setScale(sprite_play, scale_play);
    sfSprite_setTexture(sprite_play, texture_play, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_play, NULL);
}

void background_menu(sfRenderWindow *window)
{
    sfTexture *texture_forest = sfTexture_createFromFile("./background/"
    "ice_back.jpg", NULL);
    sfSprite *sprite_forest = sfSprite_create();
    sfSprite_setTexture(sprite_forest, texture_forest, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_forest, NULL);
}

void press_enter(sfRenderWindow *window)
{
    sfText *text;
    sfFont *font;
    sfVector2f position = {600, 800};
    font = sfFont_createFromFile("./font/SuperMario256.ttf");
    text = sfText_create();
    sfText_setPosition(text, position);
    sfText_setColor(text, sfWhite);
    sfText_setString(text, "Press enter to play");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfRenderWindow_drawText(window, text, NULL);
}