/*
** EPITECH PROJECT, 2020
** runner
** File description:
** the runner
*/

#include "../include/my.h"

int renderwindow(void)
{
    sfEvent event;
    sfRenderWindow *window = _window();
    t_animation_t animation;
    init_pos(&animation);
    music(&animation);
    function_display_blocks(window,
    &animation, &animation, &animation);
    function_display_clouds(window, &animation,
    &animation);
    function_display_clouds2(window, &animation, &animation);
    function_display_ground(window, &animation, &animation);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        if (animation.menu_blocked == 1) {
            background_menu(window);
            button_menu(window);
            press_enter(window);
            if(event.key.code == sfKeyEnter)
            animation.menu_blocked = 0;
        } else {
        game_over(&animation);
        if (animation.over_blocked == 1) {
            background_game_over(window);
            image_game_over(window);
            press_escape(window);
        } else {
        functions_display_background(window);
        parallax_grounds(window, &animation, &animation);
        parallax_clouds(window, &animation, &animation);
        parallax_clouds2(window, &animation, &animation);
        parallax_blocks(window, &animation, &animation, &animation);
        rect_function(&animation);
        clock_function(window, &animation);
        animation_character(window, &animation);
        number_score(window, &animation);
            }
        }
            while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.key.code == sfKeyEscape)
                sfRenderWindow_close(window);
            jump_function(window, &animation, event);
        }
    }
    sfMusic_destroy(animation.music);
    return (0);
}