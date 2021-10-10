#include "raylib.h"

int main()
{
    // window dimensions
    int width{800};
    int height{450};

    // Creates game window
    InitWindow(width, height, "Dapper Dasher by Quinton Gordon");

    // Sets FPS
    SetTargetFPS(60);

    // Game loop
    while (WindowShouldClose() == false)
    {
        // Starts drawing the game sprites on a white background
        BeginDrawing();
        ClearBackground(WHITE);

        // Stops drawing sprites
        EndDrawing();
    }
    
}