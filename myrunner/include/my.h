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
#include <stdlib.h>

typedef struct s_animation_t
{
    int menu_blocked;
    int over_blocked;
    sfVector2f pos_character_animation;
    sfVector2f pos_ground1;
    sfVector2f pos_ground2;
    sfVector2f pos_cloud1;
    sfVector2f pos_cloud1_2;
    sfVector2f pos_cloud2;
    sfVector2f pos_cloud2_2;
    sfClock *clock_jump;
    sfTime time_jump;
    sfVector2f pos_block1;
    sfVector2f pos_block2;
    sfVector2f pos_block3;
    sfVector2f pos;
    sfRenderWindow *window;
    sfMusic *music;
    sfTexture *texture_animation_character;
    sfSprite *sprite_animation_character;
    sfClock *clock_animation;
    sfClock *clock_number_score;
    sfClock *clock_game_over;
    sfTime time_animation;
    sfTime time_score;
    sfTime time_game_over;
    sfIntRect rect_animation_character;
    sfIntRect rect_jump_character;
    sfIntRect number_rect;
    sfMusic *jump_sound;
    float seconds_jump;
    float seconds_animation;
    float seconds_score;
    float seconds_game_over;
}t_animation_t;

void sky(sfRenderWindow *window);
void ground(sfRenderWindow *window, t_animation_t *ground1);
void ground_2(sfRenderWindow *window, t_animation_t *ground2);
void parallax_grounds(sfRenderWindow *window,
t_animation_t *ground1,
t_animation_t *ground2);
void rock1(sfRenderWindow *window);
void rock2(sfRenderWindow *window);
void cloud1(sfRenderWindow *window, t_animation_t *cloud1_move);
void cloud1_2_move(sfRenderWindow *window, t_animation_t *cloud_1_2_move);
void cloud2(sfRenderWindow *window, t_animation_t *cloud2_move);
void cloud2_2_move(sfRenderWindow *window, t_animation_t *cloud2_2);
void parallax_clouds(sfRenderWindow *window,
t_animation_t *cloud1_move, t_animation_t *cloud_1_2_move);
void parallax_clouds2(sfRenderWindow *window,
t_animation_t *cloud2_move,
t_animation_t *cloud2_2);
void block_1(sfRenderWindow *window,
t_animation_t *block_sprite);
void block_2(sfRenderWindow *window,
t_animation_t *block2_sprite);
void block_3(sfRenderWindow *window,
t_animation_t *block3_sprite);
void parallax_blocks(sfRenderWindow *window,
t_animation_t *block_sprite,
t_animation_t *block2_sprite,
t_animation_t *block3_sprite);
void animation_character(sfRenderWindow *window, t_animation_t *animation);
void clock_animation_character(t_animation_t *animation);
void clock_jump(t_animation_t *jump_down,
t_animation_t *animation);
void clock_score(sfRenderWindow *window, t_animation_t *animation);
void rect_character_animation(t_animation_t *animation);
void jump_function(sfRenderWindow *window,
t_animation_t *animation, sfEvent event);
sfRenderWindow *_window();
int renderwindow();
void music(t_animation_t *music_all);
int jump_sound(t_animation_t *sound);
void destroy_sound(t_animation_t *sound);
int open_file(char const *filepath);
int print_the_file(int ac, char **av);
int my_strlen (char const *str);
void my_putchar (char c);
int my_putstr(char const *str);
void score(sfRenderWindow *window);
void number_score(sfRenderWindow *window, t_animation_t *animation);
void rect_number(t_animation_t *animation);
void functions_display_background(sfRenderWindow *window);
void function_display_blocks(sfRenderWindow *window,
t_animation_t *block_sprite,
t_animation_t *block2_sprite,
t_animation_t *block3_sprite);
void function_display_clouds(sfRenderWindow *window,
t_animation_t *cloud1_1,
t_animation_t *cloud_1_2);
void function_display_clouds2(sfRenderWindow *window,
t_animation_t *cloud_2_2,
t_animation_t *cloud2_2);
void function_display_ground(sfRenderWindow *window,
t_animation_t *ground1,
t_animation_t *ground2);
void rect_function(t_animation_t *animation);
void clock_function(sfRenderWindow *window,
t_animation_t *animation);
void score_function(sfRenderWindow *window, t_animation_t *animation);
void pos_max_jump(sfRenderWindow *window, t_animation_t *animation);
void init_pos(t_animation_t *animation);
void button_menu(sfRenderWindow *window);
void background_menu(sfRenderWindow *window);
void press_enter(sfRenderWindow *window);
void game_over(t_animation_t *animation);
void background_game_over(sfRenderWindow *window);
void image_game_over(sfRenderWindow *window);
void press_escape(sfRenderWindow *window);

#endif //B_MUL_100_NCE_1_1_MYHUNTER_FLORIAN_BONAMY_MY_H