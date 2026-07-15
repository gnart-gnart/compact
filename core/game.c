#include "game.h"
#include <raylib.h>

constexpr int windowWidth = 800;
constexpr int windowHeight = 600;

void gameInitialize() {
    InitWindow(windowWidth, windowHeight, "gnartgame");
    SetTargetFPS(60);

    BeginDrawing();
        ClearBackground(RAYWHITE);
    EndDrawing();
}

void gameRun() {
    while (!WindowShouldClose()) {
        // Update
        float delta = GetFrameTime();

        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }
}

void gameTerminate() {
    CloseWindow();
}