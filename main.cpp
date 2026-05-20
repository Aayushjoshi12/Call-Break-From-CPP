#include<raylib.h>
#include<iostream>

using namespace std;
int screenwidth = 900;screenheight = 900;

int main(){
    InitWindow(screenwidth,screenheight,"Cpp");
    SetTargetFPS(100);
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(Red); 
        EndDrawing();
}
}