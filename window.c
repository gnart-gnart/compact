#include "window.h"
#include <raylib.h>

void openWindow() {
    InitWindow(windowWidth, windowHeight, "gnart's game");
    SetTargetFPS(60);
}

void closeWindow() {
    CloseWindow();
}
