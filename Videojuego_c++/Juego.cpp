#include<iostream>
#include <Windows.h>
#include<SFML>
int main(){

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = 4;
    dwPos.Y = 5;

    SetConsoleCursorPosition(hCon, dwPos);
    std::cout << "*";

    dwPos.X = 18;
    dwPos.Y = 8;
    SetConsoleCursorPosition(hCon, dwPos);
    std::cout << "*";

    return 0;
}