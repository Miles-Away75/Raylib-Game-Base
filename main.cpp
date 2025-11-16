#include "raylib.h"

#include <thread> 
#include <chrono>

int screenwidth = 600;
int screenheight = 600;

void wait(double seconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds((int)(seconds * 1000)));
}


int main() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenwidth, screenheight, "UtilClasses");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        screenwidth = GetScreenWidth();
        screenheight = GetScreenHeight();
        
        
        BeginDrawing();

            ClearBackground(RAYWHITE);

        EndDrawing();

    }

    CloseWindow();
}
