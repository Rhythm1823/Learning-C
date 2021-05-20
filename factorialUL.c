#include <stdio.h>
int main()
{
	int number;
	int i;
	int fact=1;
	printf( "enter the number: ");
	scanf("%d", &number);
for (i=1; i<=number; i++)
{
	fact=fact*i;
}
printf(" the factorial of %d is %d", number, fact);
return 0;
}
