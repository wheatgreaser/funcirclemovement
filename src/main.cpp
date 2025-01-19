#include <raylib.h>

int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    int ballX = 400;
    int ballY = 400;
    
    
    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        if(IsKeyDown(KEY_RIGHT)){
            ballX += 3;
        }
        if(IsKeyDown(KEY_LEFT)){
            ballX -= 3;
        }
        if(IsKeyDown(KEY_UP)){
            ballY -= 3;
        }
        if(IsKeyDown(KEY_DOWN)){
            ballY += 3;
        }
        
        BeginDrawing();
            ClearBackground(darkGreen);
            DrawCircle(ballX, ballY, 20, WHITE);
        EndDrawing();
    }
    
    CloseWindow();
}