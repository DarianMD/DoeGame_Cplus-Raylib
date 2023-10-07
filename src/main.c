#include <stdio.h>
#include <raylib.h>


#define MAP_TILE_SIZE 32
#define CHARACTER_SIZE 16


typedef struct Map
{
    unsigned int tilesX;
    unsigned int tilesY;

} Map;

int main()
{

    int screen_width = 1000;
    int screen_height = 600;

    int ground_box_height = 300;
    int ground_box_width = 0;



    InitWindow(screen_width, screen_height, "HELLO WORLD!");

    Map map = {0};
    map.tilesX = 50;
    map.tilesY = 15;

    Vector2 playerPosition = {screen_width / 2, screen_height / 2};
    Vector2 ground = {ground_box_width, ground_box_height};


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
        /*else if ((playerPosition.x + CHARACTER_SIZE) > map.tilesX * MAP_TILE_SIZE)
        {
            playerPosition.x = (float)map.tilesX * MAP_TILE_SIZE - CHARACTER_SIZE;
        }
        else if ((playerPosition.y + CHARACTER_SIZE) > map.tilesY * MAP_TILE_SIZE)
        {
            playerPosition.y = (float)map.tilesY * MAP_TILE_SIZE - CHARACTER_SIZE;
        }*/

        else if((playerPosition.y + CHARACTER_SIZE) < ground.y){

            playerPosition.y = ground.y - CHARACTER_SIZE;

        }

         else if((playerPosition.x + CHARACTER_SIZE) > screen_width){

            playerPosition.x = screen_width - CHARACTER_SIZE;

        }

          else if((playerPosition.y + CHARACTER_SIZE) > screen_height){

            playerPosition.y = screen_height - CHARACTER_SIZE;

        }



        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleV(ground, (Vector2){1000, 300}, RED);
        DrawRectangleV(playerPosition, (Vector2){50, 50}, BLUE);


        EndDrawing();
    }

    CloseWindow();
    return 0;
}