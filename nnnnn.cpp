#include<stdio.h>
int main()
{
	int a, i, d=0;
	
	scanf("%d", &a);
	for(i=2; i<a; i++)
	{
		if(a%i==0)
		{
			d = 0;
			break;
		}
		else
		{
			d++;
			break;
		}
	}
	if(d==0)
	{
		printf("not prime");
	}
	if(d==1)
	{
		printf("prime");
	}
	}
