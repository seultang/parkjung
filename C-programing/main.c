#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int hd()
{
	printf("haha");
}

int wb()
{
	{
		printf("\033[47m_______________________________________________________________________________________________________________________________");
		return 0;
	}
}

int main()
{   
	wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); hd(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb(); wb();
	return 0;
}