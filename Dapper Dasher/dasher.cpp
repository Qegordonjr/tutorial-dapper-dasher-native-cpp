#include "raylib.h"

int main()
{
    // window dimensions
    const int windowWidth{800};
    const int windowHeight{450};

    // Creates game window
    InitWindow(windowWidth, windowHeight, "Dapper Dasher by Quinton Gordon");

    // acceleration due to gravity
    const int gravity{1};

    // Rectangle dimenstions
    const int recWidth{50};
    const int recHeight{80};

    const int ground{windowHeight - recHeight};

    int posY{ground};
    int velocity{0};
    bool isInAir{false};
    const int jumpVel{-22};

    // Sets FPS
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose())
    {
        // Starts drawing the game sprites on a white background
        BeginDrawing();
        ClearBackground(WHITE);

        // apply gravity
        if (posY < ground)
        {
            velocity += gravity;
            isInAir = true;
        }
        else
        {
            velocity = 0;
            isInAir = false;
        }

        if (IsKeyPressed(KEY_SPACE) && !isInAir)
        {
            velocity += jumpVel;
        }

        // update position
        posY += velocity;
        
        DrawRectangle(windowWidth/2, posY, recWidth, recHeight, BLUE);

        // Stops drawing sprites
        EndDrawing();
    }
    // Closes window normally if while loop is left
    CloseWindow();
    
}