/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myhunter-florian.bonamy
** File description:
** TODO: add description
*/

#ifndef B_MUL_100_NCE_1_1_MYHUNTER_FLORIAN_BONAMY_MY_H
#define B_MUL_100_NCE_1_1_MYHUNTER_FLORIAN_BONAMY_MY_H

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/System/Export.h>
#include <stdio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_rect_t
{
    sfVector2f pos;
    float x;
    float y;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    sfTexture *my_texture;
    sfSprite *my_sprite;
    sfSprite *my_sprite2;
    sfTexture *my_texture2;
    sfTexture *my_texture3;
    float seconds;
    float speed;
    sfRenderWindow *window;
    sfMusic *music;
} t_rect_t;

void background(sfRenderWindow *window, t_rect_t *rect);
int music(t_rect_t *rect);
void duck(sfRenderWindow *window, t_rect_t *rect);
void hearth(sfRenderWindow *window, t_rect_t *rect);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar (char c);
int print_the_file(int ac, char **av);
int open_file(char const *filepath);
void destroy();
void animation(sfIntRect *rect, int offset, int max_value, sfSprite *my_sprite);

#endif //B_MUL_100_NCE_1_1_MYHUNTER_FLORIAN_BONAMY_MY_H
