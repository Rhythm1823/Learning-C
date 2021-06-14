//Write a menu driven program to calculate having options: a) Factorial of a number. b) Odd or Even. c) Area of circle. d) Exit.
#include <stdio.h>
#define PI 3.14
int main()
{
	char ch,q;
	int i,n,f;
	float r;

	while (ch!= 'd')
	{
	printf(" enter \n a to get a factorial of a number \n b to know odd or even \n c to find area of a circle \n d to exit \n");
	scanf("%c", &ch);
	switch (ch)
	{
		case 'a':
			printf(" enter any number");
			scanf("%d", &n);
			for (i=1;i<=n;i++)
			{
				f= f*i;
			}
			printf(" the factorial is %d", f);
		break;
		case 'b':
			printf(" enter the number");
			scanf("%d", &n);
			if (n %2 ==0)
			{
				printf(" even");
			}
				else 
				{
					printf(" odd");
				}
				break;
				case 'c':
					printf(" enter the radius");
					scanf(" %f", &r);
					printf(" area of circle is %f", PI*r*r);
					break;
			default:
				printf(" invalid");
				break;
				
			
				}
			}
			return 0;
	}
	
	
	
	


