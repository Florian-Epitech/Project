/*
** EPITECH PROJECT, 2020
** runner3
** File description:
** the runner
*/

#include "../include/my.h"

void music(t_animation_t *music_all)
{
    music_all->music = sfMusic_createFromFile("./music/the-witcher-3.ogg");
    sfMusic_setVolume(music_all->music, 1);
    sfMusic_play(music_all->music);
    sfMusic_setLoop(music_all->music, sfTrue);
}