#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    gotoxy(1, 1);
    // 빨간색 텍스트

    printf("\033[36m이 텍스트는 청록색입니다.\033[0m\n");


    gotoxy(4, 1);
    // 초록색 텍스트와 노란색 배경

    printf("\033[32m\033[47m이 텍스트는 초록색이고 배경은 흰색입니다.\033[0m\n");


    gotoxy(7, 1);
    // 굵은 텍스트와 파란색 텍스트

    printf("\033[4m\033[31m이 텍스트는 밑줄이 쳐진 빨간색입니다.\033[0m\n");



    return 0;

}