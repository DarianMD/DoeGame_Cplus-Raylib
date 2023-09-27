#include <stdio.h>
#include <raylib.h>


int main(){
    
    InitWindow(400,400, "Hello");


    int num_x = 0;
    int num_y = 0;
    int num_filas = 10;

    int r_color = 255;
    int g_color = 255;
    int b_color = 255;
    int a_color = 255;

    while(!WindowShouldClose()){
        BeginDrawing();

        while(num_y < 400){

            DrawPixel(num_x,num_y, (Color){.r=r_color, .g=g_color, .b=b_color, .a=a_color});
            num_x++;

            if(num_x == 400){
                num_filas--;
                num_y++;
                num_x = 0;
            }

            if(num_filas == 0){
                num_filas = 10;
                r_color -= 5;

            }
            
        }
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}