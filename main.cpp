#include "raylib.h"

#include <thread> 
#include <chrono>

const int screenwidth = 600;
const int screenheight = 600;

void wait(double seconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds((int)(seconds * 1000)));
}


int main() {
    InitWindow(screenwidth, screenheight, "UtilClasses");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

        EndDrawing();

    }

    CloseWindow();
}