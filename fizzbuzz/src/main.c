/*
** EPITECH PROJECT, 2021
** Solo Stumper
** File description:
** main
*/

#include "../include/my.h"

int error(int number1, int number2)
{
    if (number1 > number2) {
        printf("Error: the second parameter must be greater than the first one.\n");
        return (84);
    }
    return (84);
}

int modulo(int number1, int number2)
{
    error(number1, number2);
    number2 = number2 + 1;
    while (number1 != number2) 
    {
        int number3 = number1;
        int modulo3 = number3 % 3;
        int modulo5 = number3 % 5;

        if (modulo3 == 0)
        {
            if (modulo5 == 0)
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
            number1++;
        } else if (modulo5 == 0) {
            printf("Buzz\n");
            number1++;
        } else {
            printf("%d\n", number1);
            number1++;
        }
    }
    return (0);
}

int main (int ac, char **av)
{
    if (ac != 3)
        return (84);
    int number1 = atoi(av[1]);
    int number2 = atoi(av[2]);
    modulo(number1, number2);
    return (0);
}