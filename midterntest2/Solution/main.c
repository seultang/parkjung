#include<stdio.h>

PassOrFail(int score)
{
	if (score >= 50)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int score=80;
	if (PassOrFail(score))
	{
		printf("�հ��Դϴ�?");
	}
	else
	{
		printf("����� �ֽ��ϴ�");
	}
	return 0;
}