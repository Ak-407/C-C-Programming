#include<stdio.h>
int main()
{
	for(int i=1; i<=4; i++)
	{
		for(int s=1; s<=4-i; s++)
		{
			printf(" ");
		}
		for(int j=1; j<=i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}