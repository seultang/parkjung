#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    int n=0;
    int t=0;
    while (n < 1000)
    {   
        if (n <= 29)
        {
            while (n <= 29)
            {
                gotoxy(n, n);
                printf("박정현");
                n++;
            }
        }
        else if (n > 29)
        {
            while (n <1000)
            {
                printf("\n");
                gotoxy(n, n);
                while (t < n)
                {
                    printf(" ");
                    t++;
                }
                printf("박정현");
                n++;
                t = 0;
            }
        }
    }
    return 0;
}