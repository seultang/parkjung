#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    gotoxy(1, 1);
    // ������ �ؽ�Ʈ

    printf("\033[36m�� �ؽ�Ʈ�� û�ϻ��Դϴ�.\033[0m\n");


    gotoxy(4, 1);
    // �ʷϻ� �ؽ�Ʈ�� ����� ���

    printf("\033[32m\033[47m�� �ؽ�Ʈ�� �ʷϻ��̰� ����� ����Դϴ�.\033[0m\n");


    gotoxy(7, 1);
    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ

    printf("\033[4m\033[31m�� �ؽ�Ʈ�� ������ ���� �������Դϴ�.\033[0m\n");



    return 0;

}