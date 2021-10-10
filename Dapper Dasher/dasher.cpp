#include "raylib.h"

int main()
{
    // window dimensions
    const int windowWidth{800};
    const int windowHeight{450};

    // Creates game window
    InitWindow(windowWidth, windowHeight, "Dapper Dasher by Quinton Gordon");

    // Rectangle dimenstions
    const int recWidth{50};
    const int recHeight{80};

    int posY{windowHeight - recHeight};
    int velocity{0};

    // Sets FPS
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose())
    {
        // Starts drawing the game sprites on a white background
        BeginDrawing();
        ClearBackground(WHITE);

        if (IsKeyPressed(KEY_SPACE))
        {
            velocity -= 10;
        }

        posY += velocity;
        
        DrawRectangle(windowWidth/2, posY, recWidth, recHeight, BLUE);

        // Stops drawing sprites
        EndDrawing();
    }
    // Closes window normally if while loop is left
    CloseWindow();
    
}