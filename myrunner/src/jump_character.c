/*
** EPITECH PROJECT, 2020
** jump
** File description:
** jump
*/

#include "../include/my.h"

int jump_sound(t_animation_t *sound)
{
    sound->jump_sound = sfMusic_createFromFile("./music/Jump Sound Effect.ogg");
    sfMusic_setVolume(sound->jump_sound, 1);
    sfMusic_play(sound->jump_sound);
    return (0);
}

void jump_function(sfRenderWindow *window,
t_animation_t *animation, sfEvent event)
{
    t_animation_t sound;
    if (event.key.code == sfKeySpace) {
        sfSprite_setPosition
        (animation->sprite_animation_character,
        animation->pos_character_animation);
        if(animation->pos_character_animation.y >= 200)
        animation->pos_character_animation.y += -80;
        sfRenderWindow_drawSprite(window,
        animation->sprite_animation_character, NULL);
        jump_sound(&sound);
    }
}

void clock_jump(t_animation_t *jump_down,
t_animation_t *animation)
{
    jump_down->time_jump = sfClock_getElapsedTime
    (jump_down->clock_jump);
    jump_down->seconds_jump =
    jump_down->time_jump.microseconds / 1000000.0;

    if (jump_down->seconds_jump < 0.5) {
        if(animation->pos_character_animation.y <= 800)
        animation->pos_character_animation.y += 20;
    }
    if (jump_down->seconds_jump > 0.6)
        sfClock_restart(jump_down->clock_jump);
}