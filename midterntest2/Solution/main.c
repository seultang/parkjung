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
		printf("합격입니다?");
	}
	else
	{
		printf("재시험 있습니다");
	}
	return 0;
}