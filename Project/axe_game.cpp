#include "raylib.h"
int main()
{
    int width;
    width = 350;
    InitWindow(width, 120, "Olhame So");

    while(!WindowShouldClose())
    {
        BeginDrawing();    
        ClearBackground(RED);
        EndDrawing();
    }
}