#include "raylib.h"

int main()
{
    // window dimensions
    const int windowWidth{800};
    const int windowHeight{450};

    // Creates game window
    InitWindow(windowWidth, windowHeight, "Dapper Dasher by Quinton Gordon");

    // Sets FPS
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose())
    {
        // Starts drawing the game sprites on a white background
        BeginDrawing();
        ClearBackground(WHITE);

        // Stops drawing sprites
        EndDrawing();
    }
    // Closes window normally if while loop is left
    CloseWindow();
    
}