#include<stdio.h>
void amaan()
{
	printf("A.\n"
	       "B.\n"
		   "c.\n");
}
int main()
{
	char i[2];
	amaan();
	scanf("%s", &i);
	
	printf("you choose %s\n", i);
	
	scanf("%s", &i);
	
	printf("you choose %s\n", i);
	
	
	scanf("%s", &i);
	
	printf("you choose %s\n", i);

	scanf("%s", &i);
	
	printf("you choose %s", i);

	
	return 0;
	
}