#include <stdio.h>
#include <math.h>
int main()
{
	int n,c;
	int i,d,e,f;
	printf(" enter any number: ");
	scanf("%d",& n);
for (i=1;c<=n;i++)
{
	c= i*i;
if (n== c)
{

	printf(" the %d is a perfect square.", n);
	return 0;
}
}
d= sqrt(c);
e= d-1;
f= e*e;
printf(" nearest perfect square is %d", f);
return 0;
}


