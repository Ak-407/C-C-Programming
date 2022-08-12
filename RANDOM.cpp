#include<stdio.h>
int main(){
    int a, x, y;
    for(a=1; ; a++)
    {
    	if(a%2==0)
    	{
    		x= a*a*a;
    		printf("%d - ", x);
		}
		else
		{
			y= a*a;
			printf("%d + ", y);
		}
	}
}
	 