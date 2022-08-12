#include<stdio.h>
int main()
{
	int temp, i, j;
	int a[3][3];
	printf("put the numbers = ");
	for(i=0; i<=2; i++)
	{
		for (j=0; j<=2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
		for(i=0; i<=2; i++)
		{
			for (j=0; j<=2; j++)
		{
			printf("%d ", a[i][j]);		
		}
		printf("\n");
		}
		printf("\n");
		printf("\n");
	for (i=0; i<=2; i++)
	   {
	   	for (j=0; j<=2; j++)
	   	{
		   
	   	
	   	temp = a[i][j];
	   	a[i][j] = a[j][i];
	   	a[j][i] = temp;
	   }
}
	   
	   for(i=0; i<=2; i++)
		{
			for (j=0; j<=2; j++)
		{
			printf("%d ", a[j][i]);		
		}
		printf("\n");
		}
		
		
		
		
		
		
		
	    }