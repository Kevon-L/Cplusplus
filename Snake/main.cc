// Copyright 2026 KeVon Lindsey

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

bool gameOver;

const int width = 20;
const int height = 20;

int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("clear");

    for(int i = 0; i < width + 2; i++) 
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width + 2; j++) {
            if (j == 0 || j == width + 1) //if it's a part of the left or right border
                cout << "#";
            else
                cout << " ";
        }
        
        cout << endl;
    }

    for(int i = 0; i < width + 2; i++) 
        cout << "#";
    cout << endl;
}

void Input() {

}

void Logic() {

}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
    }

    return 0;
}
