#include<stdio.h>
int main()
{
    for(int q=1; q<=5; q++)
    {
    	for(int w=1; w<=(5-q); w++)
    	{
    		printf(" ");
		}
		for(int e=1; e<=(2*q)-1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=5; i>=1; i--)
	{
		
		for(int k=1; k<=5-i; k++)
		{
			printf(" ");
		}
		for(int j=1; j<=(2*i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}