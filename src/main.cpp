#include <stdio.h>
#include <raylib.h>
#include "./obj/map.cpp"

Map *mapa;

int main()
{

    int screen_width = 1000;
    int screen_height = 600;

    int ground_box_height = 300;
    int ground_box_width = 0;

    InitWindow(screen_width, screen_height, "HELLO WORLD!");

   
    Vector2 playerPosition = {screen_width / 2, screen_height / 2};

    mapa = new Map("map/map1.json");
   
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        if (IsKeyDown(KEY_RIGHT))
        {
            playerPosition.x += 5;
        }
        if (IsKeyDown(KEY_LEFT))
        {
            playerPosition.x -= 5;
        }
        if (IsKeyDown(KEY_DOWN))
        {
            playerPosition.y += 5;
        }
        if (IsKeyDown(KEY_UP))
        {
            playerPosition.y -= 5;
        }

        if (playerPosition.x < 0)
        {
            playerPosition.x = 0;
        }


        BeginDrawing();

        ClearBackground(RAYWHITE);


        EndDrawing();
    }

    CloseWindow();
    return 0;
}