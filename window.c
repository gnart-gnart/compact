#include "window.h"

#include <raylib.h>

void startWindow() {
    InitWindow(windowWidth, windowHeight, "gnart's game");
    SetTargetFPS(60);
}

void stopWindow() {
    CloseWindow();
}
