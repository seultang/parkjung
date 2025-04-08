#include<stdio.h>

int main()
{   
	int i = 0;
	int j=0;
	while (j<6)
	{
		i = 0;
		while(i<6)
		{
			if(j>=i)
			{
				printf("*");
			}
			i = i + 1;
		}
		printf("\n");
		j = j + 1;
	}
	return 0;
}