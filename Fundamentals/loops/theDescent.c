#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

// Destroy the mountains before your starship collides with one of them. For that, shoot the highest mountain on your path.
//link: https://www.codingame.com/ide/puzzle/the-descent
int main()
{
    int mountain_h[8];
    int max_h;
    int max_i;
    int i;

    // game loop
    while (1)
    {
        i = 0;
        // Read the heights of the mountains
        while(i < 8)
        {
            scanf("%d", &mountain_h[i]);
            i++;
        }

        max_h = 0;
        max_i = 0;
        i = 0;
        while(i < 8)
        {
            if(mountain_h[i] > max_h)
            {
                max_h = mountain_h[i];
                max_i = i;
            }
            i++;
        }
        // Print the mountain to be destroyed
        printf("%d\n", max_i);
    }

    return 0;
}
