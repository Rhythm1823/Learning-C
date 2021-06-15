#include <stdio.h>
int main()
{
	int i,rem,c=0,n,arm=1,p,q,number=0;
	printf(" enter any number");
	scanf("%d", &n);
	p=n;
	q=n;
	while (n!=0)
	{
		n=n/10;
		c=c+1;
		
	}
	printf("it is a %d digit number ",c);

	while (p!=0)
	{
		
		rem = p % 10;

		for (i=1;i<=c;i++)
		{
		
		arm = arm*rem;
		
		
		
}
	number= number + arm;
p=p/10;
i=1;
rem=1;
arm=1;

}
printf("\n");
if (q==number)
{
	printf(" armstrong");
}
else
{
	printf(" not armstrong");
}
return 0;
}


