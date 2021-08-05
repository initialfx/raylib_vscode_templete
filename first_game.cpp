#include "raylib.h"

int main()
{
    int width;
    width = 320;

    InitWindow(width, 240, "First Game");

    int circle_x{175};
    int circle_y{100};
    
    //SetTargetFPS(60);

    while(WindowShouldClose() != true)
    {        
        BeginDrawing();
        ClearBackground(WHITE);

        // Game Logic Begin
        
        DrawCircle(circle_x, circle_y, 25, BLUE);
        if(IsKeyDown(KEY_D))
        {
            circle_x += 10;
        }
        
        EndDrawing();
    }
}