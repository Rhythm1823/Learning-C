#include <stdio.h>
 void printstar()
 {
 		int i,j;
	for (i=1; i<=5; i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		
		}
		printf("\n");
 	
 }
}
int main()
{
	int i,j;
	printstar();
	for (i=1; i<=1;i++)
	{
		printf("*\n");
	}
		for (i=1; i<=8; i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		
		}
	
		printf("\n");
	}
	
	return 0;
}
