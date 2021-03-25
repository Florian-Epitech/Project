/*
** EPITECH PROJECT, 2020
** 101Pong Game
** File description:
** 101 Pong Game
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// CALCULATION OF THE VELOCITY
void velocity_calcul(float x1, float y1, float z1, float x2, float y2, float z2)
{
    float velocity_x = 0;
    float velocity_y = 0;
    float velocity_z = 0;

    velocity_x = x2 - x1;
    velocity_y = y2 - y1;
    velocity_z = z2 - z1;

    printf("The velocity vector of the ball is:\n");
    printf("(%.*f, %.*f, %.*f)\n", velocity_x,2, velocity_y,2, velocity_z,2);
}

// CALCULATION OF THE BALL COORDINATES CONSIDARING THE TIME
void time_coordonates (float velocity_x, float velocity_y, float velocity_z, float x2, float y2, float z2,
                      int time)
{
    float time_result_x = (velocity_x * time + 1) + x2 - 1;
    float time_result_y = (velocity_y * time + 1) + y2 - 1;
    float time_result_z = (velocity_z * time + 1) + z2 - 1;

    printf("At time t + %d, ball coordinates will be:\n", time); // %d or %.0f or others?
    printf("(%.*f, %.*f, %.*f)\n", time_result_x,2, time_result_y,2, time_result_z,2); // %.*f or %.2f or other ?
}

// CALCULATION OF THE INCIDENCE ANGLE
float angle_calcul(float velocity_x, float velocity_y, float velocity_z)
{
    float adjacent = 0;
    float hypotenuse = 0;
    float angle = 0;
    float pi = M_PI;

    adjacent = pow(velocity_x,2) + pow(velocity_y,2);
    adjacent = sqrtf(adjacent);

    hypotenuse = pow(velocity_x,2) + pow(velocity_y,2) + pow(velocity_z,2);
    hypotenuse = sqrtf(hypotenuse);

    angle = adjacent / hypotenuse;
    angle = acosf(angle);
    angle = angle * 180;
    angle = angle / pi;

    return(angle);
}

// HANDLE THE CASE IF THE BALL DON'T REACH THE PADDLE
int paddle_collision(float z1, float z2, float angle)
{
    if (z2 > z1 && z1 > 0)
    {
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", angle);
    }
    if (z1 > z2 && z2 > 0)
    {
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", angle);
    }
    else if (z1 == z2)
    {
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", angle);
    }
    else
        printf("The ball won’t reach the paddle.\n");

        return(0);
}

int main(int ac, char **av) {

    if (ac != 8) {
        printf("Wrong parameters\n");
        return (84);
    }

    // TODO : CHECK IF THE USERS WRITE ONLY FROM 0 TO 9.

    // LIST OF THE ARGUMENTS
    float x1 = atof(av[1]);
    float y1 = atof(av[2]);
    float z1 = atof(av[3]);
    float x2 = atof(av[4]);
    float y2 = atof(av[5]);
    float z2 = atof(av[6]);
    int time = atof(av[7]);

    // VELOCITY VARIABLES
    float velocity_x = x2 - x1;
    float velocity_y = y2 - y1;
    float velocity_z = z2 - z1;

    // CALLING THE PROGRAM

    velocity_calcul(x1, y1, z1, x2, y2, z2);
    time_coordonates(velocity_x, velocity_y, velocity_z, x2, y2, z2, time);

    // PUT ANGLE CALCUL IN A VARIABLE TO USE MY PADDLE_COLLISION()
    float angle = angle_calcul(velocity_x, velocity_y, velocity_z);

    paddle_collision(z1, z2, angle);

    return(0);
}
