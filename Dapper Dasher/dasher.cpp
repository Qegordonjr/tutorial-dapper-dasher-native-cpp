#include "raylib.h"

int main()
{
    // window dimensions
    const int windowWidth{800};
    const int windowHeight{450};

    // Creates game window
    InitWindow(windowWidth, windowHeight, "Dapper Dasher by Quinton Gordon");

    // acceleration due to gravity
    const int gravity{1'000};

    Texture2D scarfy = LoadTexture("textures/scarfy.png");
    Rectangle scarfyRec;
    scarfyRec.width = scarfy.width/6;
    scarfyRec.height = scarfy.height;
    scarfyRec.x = 0;
    scarfyRec.y = 0;
    Vector2 scarfyPos;
    scarfyPos.x = windowWidth/2 - scarfyRec.width/2;
    scarfyPos.y = windowHeight - scarfyRec.height;

    const int ground{windowHeight - scarfyRec.height};

    int velocity{0};
    bool isInAir{false};
    const int jumpVel{-600};

    // Sets FPS
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose())
    {
        // Delta time (time since last frame)
        float dT{GetFrameTime()};

        // Starts drawing the game sprites on a white background
        BeginDrawing();
        ClearBackground(WHITE);

        // apply gravity
        if (scarfyPos.y < ground)
        {
            velocity += gravity * dT;
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
        scarfyPos.y += velocity * dT;
        
        DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);

        // Stops drawing sprites
        EndDrawing();
    }
    // Closes window normally if while loop is left
    UnloadTexture(scarfy);
    CloseWindow();
    
}